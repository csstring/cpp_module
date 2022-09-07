#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : rawValue(0)
{
//	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int val)
{
	rawValue = val << 8;
//	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float val)
{
	rawValue = roundf(val * (1 << fractionalBits));
//	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
//	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed& Fixed::operator=(const Fixed &ref)
{
//	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(ref.rawValue);
	return *this;
}

Fixed::~Fixed(void)
{
//	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
//	std::cout << "getRawBits member function called" << std::endl;
	return (rawValue);
}

void Fixed::setRawBits( int const raw )
{
	rawValue = raw;
}

float Fixed::toFloat( void ) const
{
	return ((float)rawValue / (float)(1 << 8));
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

Fixed& Fixed::operator++()
{
	rawValue+=1;
	return (*this);
}

Fixed& Fixed::operator--()
{
	rawValue-=1;
	return (*this);
}

const Fixed Fixed::operator++(int)
{
	const Fixed temp(this->toFloat());
	rawValue+=1;
	return (temp);
}

const Fixed Fixed::operator--(int)
{
	const Fixed temp(this->toFloat());
	rawValue-=1;
	return (temp);
}

Fixed Fixed::operator+(const Fixed &plus)
{
	Fixed temp(this->toFloat() + plus.toFloat());
	return (temp);
}

Fixed Fixed::operator-(const Fixed &minus)
{
	Fixed temp(this->toFloat() - minus.toFloat());
	return (temp);
}

Fixed Fixed::operator*(const Fixed &mult)
{
	Fixed temp(this->toFloat() * mult.toFloat());
	return (temp);
}

Fixed Fixed::operator/(const Fixed &divide)
{
	if (divide.rawValue == 0)
	{
		std::cout << "WRARNIG : divide zero" << std::endl;
		return (divide);
	}
	Fixed temp(this->toFloat() / divide.toFloat());
	return (temp);
}

bool Fixed::operator>(const Fixed &cmp)
{
	if (rawValue > cmp.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<(const Fixed &cmp)
{
	if (rawValue < cmp.getRawBits())
		return (true);
	return (false);
}
bool Fixed::operator>=(const Fixed &cmp)
{
	if (rawValue >= cmp.getRawBits())
		return (true);
	return (false);
}
bool Fixed::operator<=(const Fixed &cmp)
{
	if (rawValue <= cmp.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed &cmp)
{
	if (rawValue == cmp.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed &cmp)
{
	if (rawValue != cmp.getRawBits())
		return (true);
	return (false);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.rawValue < b.rawValue)
		return (a);
	return (b);
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a.rawValue < b.rawValue)
		return (a);
	return (b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.rawValue > b.rawValue)
		return (a);
	return (b);
}
Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a.rawValue > b.rawValue)
		return (a);
	return (b);
}