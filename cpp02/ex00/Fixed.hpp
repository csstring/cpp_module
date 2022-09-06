#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
private:
	int numberValue;
	static const int fractionalBits = 8;
public:
	Fixed(void);
	Fixed(const Fixed &copy);
	Fixed& operator=(const Fixed &ref);
	~Fixed(void);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif