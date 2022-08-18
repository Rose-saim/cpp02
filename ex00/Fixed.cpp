#include "Fixed.hpp"

Fixed::Fixed(): fixed1(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits()const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed1);
}
void	Fixed::setRawBits(int const raw)
{
	this->fixed1 = raw;
}

Fixed&	Fixed::operator=(Fixed const &src)
{
	std::cout << "Copy assignment operator  called" << std::endl;
	this->fixed1 = src.getRawBits();
	return (*this);
}
