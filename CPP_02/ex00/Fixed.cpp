/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkankia <gkankia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 15:22:26 by gkankia           #+#    #+#             */
/*   Updated: 2025/07/24 15:25:19 by gkankia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0) 
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() 
{
	std::cout << "Destructor called" << std::endl;
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
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void	Fixed::setRawBits(int const raw) 
{
	this->value = raw;
}