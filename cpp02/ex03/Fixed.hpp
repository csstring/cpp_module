#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
class Fixed
{
private:
	int rawValue;
	static const int fractionalBits = 8;
public:
	Fixed(void);
	Fixed(const int val);
	Fixed(const float val);
	~Fixed(void);
	Fixed(const Fixed &copy);
	Fixed& operator=(const Fixed &ref);
	Fixed& operator++();
	Fixed& operator--();
	const Fixed operator++(int);
	const Fixed operator--(int);
	Fixed operator+(const Fixed &plus) const;
	Fixed operator-(const Fixed &minus) const;
	Fixed operator*(const Fixed &mult) const;
	Fixed operator/(const Fixed &divide) const;
	bool operator>(const Fixed &cmp) const;
	bool operator<(const Fixed &cmp) const;
	bool operator>=(const Fixed &cmp) const;
	bool operator<=(const Fixed &cmp) const;
	bool operator==(const Fixed &cmp) const;
	bool operator!=(const Fixed &cmp) const;
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
	static const Fixed& min(const Fixed &a, const Fixed &b);
	static Fixed& min(Fixed &a, Fixed &b);
	static const Fixed& max(const Fixed &a, const Fixed &b);
	static Fixed& max(Fixed &a, Fixed &b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& ref);

#endif