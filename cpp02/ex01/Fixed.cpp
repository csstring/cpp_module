#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : rawValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int val)
{
	rawValue = val << 8;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float val)
{
	rawValue = roundf(val * (1 << fractionalBits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed& Fixed::operator=(const Fixed &ref)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(ref.rawValue);
	return *this;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (rawValue);
}

void Fixed::setRawBits( int const raw )
{
	rawValue = raw;
}

float Fixed::toFloat( void ) const
{
	return ((float)rawValue / (1 << 8));
}

int	Fixed::toInt( void ) const
{
	return (rawValue >> 8);
}

std::ostream& operator<<(std::ostream& os, const Fixed& ref)
{
	os << ref.toFloat();
	return os;
}