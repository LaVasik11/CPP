/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkankia <gkankia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:08:06 by gkankia           #+#    #+#             */
/*   Updated: 2025/07/16 16:08:07 by gkankia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0) {}

Point::~Point() {}

Point::Point(float const x, float const y) : x(x), y(y) {}

Point::Point(Point const &src) 
{
	*this = src;
}

Point&	Point::operator=(Point const &rSym)
{
	if (this != &rSym)
        new (this) Point(rSym.getX().toFloat(), rSym.getY().toFloat());
    return (*this);
}

Fixed const Point::getX() const
{
    return (this->x);
}

Fixed const Point::getY() const
{
    return (this->y);
}