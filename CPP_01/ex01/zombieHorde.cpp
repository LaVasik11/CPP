/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkankia <gkankia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 17:46:59 by gkankia           #+#    #+#             */
/*   Updated: 2025/07/08 17:47:00 by gkankia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int n, std::string name) 
{
	int		i = -1;
	Zombie	*horde = new Zombie[n];

	while (++i < n) {
		horde[i].setName(name);
		horde[i].announce();
	}
	return (horde);
}