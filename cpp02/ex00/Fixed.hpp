#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
	private :
		int fixed_nb;
		static const int bits = 8;
	public :
		//"Constructeur par défaut"
		Fixed();
		//"Constructeur de recopie"
		Fixed(const Fixed& other);
		//"Opérateur d’affectation"
		Fixed& operator=(const Fixed& other);
		//"Destructeur"
		~Fixed();

		int getRawBits() const;
		void setRawBits(int const raw);
};

#endif