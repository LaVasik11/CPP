/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkankia <gkankia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 15:22:38 by gkankia           #+#    #+#             */
/*   Updated: 2025/07/16 15:22:39 by gkankia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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