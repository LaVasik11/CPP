/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: georgy-kankiya <georgy-kankiya@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:08:00 by gkankia           #+#    #+#             */
/*   Updated: 2025/07/17 13:31:03 by georgy-kank      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

#include <iomanip>
#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int	main()
{
	Point	a(2.02f, 0.83f);
	Point	b(2.66f, 1.68f);
	Point	c(1.24f, 1.91f);
	Point	point(2.07f, 1.46f);

	if (bsp(a, b, c, point))
		std::cout << "Le point p est dans le triange." << std::endl;
	else
		std::cout << "Le point p n'est pas dans le triangle." << std::endl;
	return (0);
}