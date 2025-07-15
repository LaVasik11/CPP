#include "Fixed.hpp"
#include <math.h>

Fixed::Fixed() : value(0) 
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() 
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int n) 
{
	std::cout << "Int constructor called" << std::endl;
	this->value = n << bits;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(f * (1 << bits));
}

Fixed::Fixed(Fixed const &src) 
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed&	Fixed::operator=(Fixed const &rSym)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rSym)
		this->value = rSym.getRawBits();
	return (*this);
}

int		Fixed::getRawBits() const 
{
	return (this->value);
}

void	Fixed::setRawBits(int const raw) 
{
	this->value = raw;
}

float	Fixed::toFloat() const
{
	return ((float)this->value / (float)(1 << bits));
}

int		Fixed::toInt() const
{
	return (this->value >> bits);
}

std::ostream&	operator<<(std::ostream& o, Fixed const &rSym)
{
	o << rSym.toFloat();
	return (o);
}

Fixed	Fixed::operator+(Fixed const &rSym) const
{
	return (Fixed(this->toFloat() + rSym.toFloat()));
}

Fixed	Fixed::operator-(Fixed const &rSym) const
{
	return (Fixed(this->toFloat() - rSym.toFloat()));
}

Fixed	Fixed::operator*(Fixed const &rSym) const
{
	return (Fixed(this->toFloat() * rSym.toFloat()));
}

Fixed	Fixed::operator/(Fixed const &rSym) const
{
	return (Fixed(this->toFloat() / rSym.toFloat()));
}

bool	Fixed::operator<(Fixed const &rSym) const
{
	if (this->getRawBits() < rSym.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>(Fixed const &rSym) const
{
	if (this->getRawBits() > rSym.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const &rSym) const
{
	if (this->getRawBits() <= rSym.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const &rSym) const
{
	if (this->getRawBits() >= rSym.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==(Fixed const &rSym) const
{
	if (this->getRawBits() == rSym.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed const &rSym) const
{
	if (this->getRawBits() != rSym.getRawBits())
		return (true);
	return (false);
}

Fixed&	Fixed::operator++()
{
	this->value++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);

	operator++();
	return (tmp);
}

Fixed&	Fixed::operator--()
{
	this->value--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);

	operator--();
	return (tmp);
}

Fixed &	Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed const &	Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed &	Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed const &	Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	return (b);
}