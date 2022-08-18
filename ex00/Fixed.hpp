#ifndef FIXED
#define FIXED

#include <iostream>

class Fixed
{
private:
		int fixed1;
		const static int	fractionnal_bits = 8;
public:
	Fixed();
	Fixed(Fixed const &src);
	int	getRawBits()const;
	void	setRawBits(int const raw);
	~Fixed();
	Fixed&	operator=(Fixed const &src);
};



#endif