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
	Fixed operator+(const Fixed &plus);
	Fixed operator-(const Fixed &minus);
	Fixed operator*(const Fixed &mult);
	Fixed operator/(const Fixed &divide);
	bool operator>(const Fixed &cmp);
	bool operator<(const Fixed &cmp);
	bool operator>=(const Fixed &cmp);
	bool operator<=(const Fixed &cmp);
	bool operator==(const Fixed &cmp);
	bool operator!=(const Fixed &cmp);
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