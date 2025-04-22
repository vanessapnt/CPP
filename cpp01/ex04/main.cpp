#include <iostream>
#include <fstream>
#include <string>

void replaceStringInLine(std::string& line, const std::string& s1, const std::string& s2)
{
    if (s1.empty())
        return;

    size_t pos = 0;
    while ((pos = line.find(s1, pos)) != std::string::npos)
    // returns the position where s1 was found in line or std::string::npos if not found
    {
        line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
        pos += s2.length();
    }
}

/*
The .c_str() method is used to convert a std::string 
object to a C-style string (null-terminated character array).
This conversion is necessary because ifstream and ofstream
constructors expect a parameter of type const char*, 
not std::string.
*/

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Wrong arguments: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::ifstream ifs(filename.c_str());
    if (!ifs.is_open())
    {
        std::cerr << "Error: Cannot open input file" << std::endl;
        return 1;
    }

    std::string outfile = filename + ".replace";
    std::ofstream ofs(outfile.c_str());
    if (!ofs.is_open())
    {
        std::cerr << "Error: Cannot create output file" << std::endl;
        ifs.close();
        return 1;
    }

    std::string line;
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    while (std::getline(ifs, line))
    {
        replaceStringInLine(line, s1, s2);
        ofs << line;
        if (!ifs.eof())
            ofs << std::endl;
    }

    ifs.close();
    ofs.close();
    return 0;
}
