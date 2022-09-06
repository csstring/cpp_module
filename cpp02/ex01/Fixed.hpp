#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
private:
	int rawValue;
	static const int fractionalBits = 8;
public:
	Fixed(void);
	Fixed(const int val);
	Fixed(const float val);
	Fixed(const Fixed &copy);
	Fixed& operator=(const Fixed &ref);
	~Fixed(void);
	float getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
};

#endif