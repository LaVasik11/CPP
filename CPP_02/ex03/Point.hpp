/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkankia <gkankia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:08:09 by gkankia           #+#    #+#             */
/*   Updated: 2025/07/16 16:08:10 by gkankia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point
{
    public:
        Point();
		~Point();
		Point(Point const &src);
		Point&	operator=(Point const &rSym);
        Point(float const x, float const y);
        
        Fixed const getX() const;
        Fixed const getY() const;
        
    private:
        Fixed const x;
        Fixed const y;
};

#endif