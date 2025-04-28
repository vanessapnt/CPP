#include "Fixed.hpp"

Fixed::Fixed() : fixed_nb(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& src)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed& Fixed::operator=(const Fixed& rhs)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->fixed_nb = rhs.fixed_nb;
	return *this;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
	//std::cout << "getRawBits member function called" << std::endl;
	return this->fixed_nb;
}

void Fixed::setRawBits(int const raw) {
	this->fixed_nb = raw;
}

Fixed::Fixed(const int value)//10 
{
    //std::cout << "Int constructor called" << std::endl;
    this->fixed_nb = value << this->bits;//2650
}

Fixed::Fixed(const float value)
{
    //std::cout << "Float constructor called" << std::endl;
    this->fixed_nb = roundf(value * (1 << this->bits));
}

float Fixed::toFloat(void) const {
    return (float)this->fixed_nb / (1 << this->bits);//divise par 256
}

int Fixed::toInt(void) const {
    return this->fixed_nb >> this->bits;
}

std::ostream& operator<<(std::ostream& o, Fixed const& rhs) {
    o << rhs.toFloat();
    return o;
}

bool Fixed::operator>(const Fixed &rhs) const {
    return this->fixed_nb > rhs.fixed_nb;
}

bool Fixed::operator<(const Fixed &rhs) const {
    return this->fixed_nb < rhs.fixed_nb;
}

bool Fixed::operator>=(const Fixed &rhs) const {
    return this->fixed_nb >= rhs.fixed_nb;
}

bool Fixed::operator<=(const Fixed &rhs) const {
    return this->fixed_nb <= rhs.fixed_nb;
}

bool Fixed::operator==(const Fixed &rhs) const {
    return this->fixed_nb == rhs.fixed_nb;
}

bool Fixed::operator!=(const Fixed &rhs) const {
    return this->fixed_nb != rhs.fixed_nb;
}

Fixed Fixed::operator+(const Fixed &rhs) const {
	return (Fixed) (this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed &rhs) const {
	return (Fixed) (this->toFloat() - rhs.toFloat()); 
}

Fixed Fixed::operator*(const Fixed &rhs) const {
	return (Fixed) (this->toFloat() * rhs.toFloat());  
}

Fixed Fixed::operator/(const Fixed &rhs) const {
    if (rhs.fixed_nb == 0)
    {
        std::cerr << "Error: Cannot devide by 0" << std::endl;
        return Fixed(0);
    }
    return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed& Fixed::operator++() {
    this->fixed_nb += 1;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp(*this);
    this->fixed_nb += 1;
    return temp;
}

Fixed& Fixed::operator--() {
    this->fixed_nb -= 1;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp(*this);
    this->fixed_nb -= 1;
    return temp;
}

Fixed& Fixed::min(Fixed &a, Fixed &b) {
    if (a < b)
        return a;
    return b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
    if (a < b)
        return a;
    return b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b) {
    if (a > b)
        return a;
    return b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b) {
    if (a > b)
        return a;
    return b;
}
