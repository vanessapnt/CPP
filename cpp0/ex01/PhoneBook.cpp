#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip> //for setfill() and setw()
#include <string> //for length()

//std::cin >> variable;
//reads only one word, stopping at the first space or tab
//doesn't work with Jean Pierre

//std::getline(std::cin, variable);
//Reads the entire line, including spaces, until it reaches a newline (\n)

//empty() is a member function of the std::string class that checks if the string is empty
//setContact() is a member function of the Contact class

void PhoneBook::addContact()
{
	std::string firstName, lastName, nickname, phoneNumber, darkestSecret;

	std::cout << "Adding a new contact..." << std::endl;
	std::cout << "Enter first name: ";
	std::getline(std::cin, firstName);
	std::cout << "Enter last name: ";
	std::getline(std::cin, lastName);
	std::cout << "Enter nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Enter phone number: ";
	std::getline(std::cin, phoneNumber);
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, darkestSecret);

	if (firstName.empty() || lastName.empty() || nickname.empty() ||
	phoneNumber.empty() || darkestSecret.empty())
	{
		std::cout << "All fields must be filled!" << std::endl;
		return;
	}

	this->contacts[this->nextIndex].setContact(firstName, lastName, nickname, phoneNumber, darkestSecret);
	this->nextIndex = (this->nextIndex + 1) % 8;
	if (this->contactCount < 8)
		this->contactCount++;

	std::cout << "Contact added successfully!" << std::endl;
}

void PhoneBook::displayContacts()
{
	if (this->contactCount == 0)
    {
        std::cout << "No contacts to display!" << std::endl;
        return;
    }
	//Header
    std::cout << std::setw(10) << "index" << "|";
    std::cout << std::setw(10) << "first name" << "|";
    std::cout << std::setw(10) << "last name" << "|";
    std::cout << std::setw(10) << "nickname" << "|" << std::endl;

	int i = 0;
    while (i < this->contactCount)
    {
		//Index
        std::cout << std::setw(10) << i << "|";
        
        //First Name
        std::string firstName = this->contacts[i].getFirstName();
        if (firstName.length() > 10)
            std::cout << firstName.substr(0, 9) << ".|";
        else
            std::cout << std::setw(10) << firstName << "|";
        
        //Last Name
        std::string lastName = this->contacts[i].getLastName();
        if (lastName.length() > 10)
            std::cout << lastName.substr(0, 9) << ".|";
        else
            std::cout << std::setw(10) << lastName << "|";
        
        //Nickname
        std::string nickname = this->contacts[i].getNickname();
        if (nickname.length() > 10)
            std::cout << nickname.substr(0, 9) << ".|";
        else
            std::cout << std::setw(10) << nickname << "|";
        
        std::cout << std::endl;
        i++;
    }
	//Search by index
	std::string input;
	std::cout << "\nEnter index of the contact to display: ";

}

//substr(starting position, lenght) : allows you to extract a substring (a portion) from a string
//setw(n) : sets the width of the next output field