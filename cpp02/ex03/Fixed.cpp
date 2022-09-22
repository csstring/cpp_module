#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : rawValue(0)
{}

Fixed::Fixed(const int val)
{
	rawValue = val << fractionalBits;
}

Fixed::Fixed(const float val)
{
	rawValue = roundf(val * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

Fixed& Fixed::operator=(const Fixed &ref)
{
	this->setRawBits(ref.rawValue);
	return *this;
}

Fixed::~Fixed(void)
{}

int Fixed::getRawBits( void ) const
{
	return (rawValue);
}

void Fixed::setRawBits( int const raw )
{
	rawValue = raw;
}

float Fixed::toFloat( void ) const
{
	return ((float)rawValue / (float)(1 << fractionalBits));
}

int	Fixed::toInt( void ) const
{
	return (rawValue >> fractionalBits);
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

Fixed Fixed::operator+(const Fixed &plus) const
{
	Fixed temp(this->toFloat() + plus.toFloat());
	return (temp);
}

Fixed Fixed::operator-(const Fixed &minus) const
{
	Fixed temp(this->toFloat() - minus.toFloat());
	return (temp);
}

Fixed Fixed::operator*(const Fixed &mult) const
{
	Fixed temp(this->toFloat() * mult.toFloat());
	return (temp);
}

Fixed Fixed::operator/(const Fixed &divide) const
{
	if (divide.rawValue == 0)
	{
		std::cout << "WRARNIG : divide zero" << std::endl;
		return (divide);
	}
	Fixed temp(this->toFloat() / divide.toFloat());
	return (temp);
}

bool Fixed::operator>(const Fixed &cmp) const
{
	if (rawValue > cmp.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<(const Fixed &cmp) const
{
	if (rawValue < cmp.getRawBits())
		return (true);
	return (false);
}
bool Fixed::operator>=(const Fixed &cmp) const
{
	if (rawValue >= cmp.getRawBits())
		return (true);
	return (false);
}
bool Fixed::operator<=(const Fixed &cmp) const
{
	if (rawValue <= cmp.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed &cmp) const
{
	if (rawValue == cmp.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed &cmp) const
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