#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

/*
"Un entier constant statique pour stocker le nombre de bits de la partie
fractionnaire, et dont la valeur sera toujours le littéral entier 8"
    Si on a un entier 32 bits, on utilise :

        24 bits pour la partie entière.

        8 bits pour la partie fractionnaire.

    Pour stocker 10 (entier) en virgule fixe :

        On le décale à gauche de 8 bits (10 << 8).

        Résultat : 10 * 256 = 2560 (car 2^8 = 256).

        En binaire : 1010 00000000 (soit 10.0).
*/

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
	};
	
std::ostream  &  operator<<(std::ostream & o, Fixed const & rhs);

#endif