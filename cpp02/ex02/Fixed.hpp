#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
	private :
		int fixed_nb;
		static const int bits = 8;
	public :
		Fixed();
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed();

		int getRawBits() const;
		void setRawBits(int const raw);

		Fixed(const int value);
		Fixed(const float value);
		float toFloat( void ) const;
		int toInt( void ) const;

        bool operator>(const Fixed &rhs) const;
        bool operator<(const Fixed &rhs) const;
        bool operator>=(const Fixed &rhs) const;
        bool operator<=(const Fixed &rhs) const;
        bool operator==(const Fixed &rhs) const;
        bool operator!=(const Fixed &rhs) const;

        Fixed operator+(const Fixed &rhs) const;
        Fixed operator-(const Fixed &rhs) const;
        Fixed operator*(const Fixed &rhs) const;
        Fixed operator/(const Fixed &rhs) const;

        Fixed& operator++();
        Fixed operator++(int);
        Fixed& operator--();
        Fixed operator--(int);

        static Fixed& min(Fixed &a, Fixed &b);
        static const Fixed& min(const Fixed &a, const Fixed &b);
        static Fixed& max(Fixed &a, Fixed &b);
        static const Fixed& max(const Fixed &a, const Fixed &b);
	};
	
std::ostream  &  operator<<(std::ostream & o, Fixed const & rhs);

#endif

/*
pre-incrementation
Fixed a(10);
Fixed& b = ++a;
a devient 11, b référence a (référence à l'objet modifié)

post-incrementation
Fixed a(10);
Fixed b = a++;
b est une copie de a (b = 10), a devient 11
*/