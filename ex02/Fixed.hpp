#ifndef FIXED
#define FIXED

#include <iostream>
#include <cmath>

class Fixed
{
private:
		int value;
		const static int	fractionnal_bits = 8;
public:
	Fixed();
	Fixed(const Fixed &src);
	Fixed(const int value);
	Fixed(const float value);
	~Fixed();
	float toFloat(void)const;
	int toInt( void )const;
	int	getRawBits()const;
	void	setRawBits(const int raw);
	Fixed&	operator=(Fixed const &src);
};

std::ostream&	operator<<(std::ostream& os, const Fixed& src);


#endif