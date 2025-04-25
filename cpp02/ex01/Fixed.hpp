#ifndef FIXED_HPP
#define FIXED_HPP

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

		Fixed(const int value);
		Fixed(const float value);

		int getRawBits() const;
		void setRawBits(int const raw);

		float toFloat( void ) const;
		int toInt( void ) const;
};

std::

#endif