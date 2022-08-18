#include "Fixed.hpp"

Fixed::Fixed(): value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int consctructor  called" << std::endl;
	this->value = value << this->fractionnal_bits;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float consctructor  called" << std::endl;
	this->value = roundf(value * (1 << this->fractionnal_bits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits()const
{
	return (this->value);
}
void	Fixed::setRawBits(const int raw)
{
	this->value = raw;
}

Fixed&	Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignment operator  called" << std::endl;
	this->value = src.getRawBits();
	return (*this);
}

float	Fixed::toFloat()const
{
	return ((float)this->value / (float)(1 << this->fractionnal_bits));
}

std::ostream&	operator<<(std::ostream& os, const Fixed& src)
{
	os << src.toFloat();
	return os;
}

int	Fixed::toInt()const
{
	return (this->value >> this->fractionnal_bits);
}