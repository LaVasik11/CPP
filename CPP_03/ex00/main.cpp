/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkankia <gkankia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 15:09:52 by gkankia           #+#    #+#             */
/*   Updated: 2025/07/24 16:11:08 by gkankia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap    hero("BatMan");

    hero.attack("jocker");
    hero.takeDamage(3);
    hero.beRepaired(1);
    hero.beRepaired(1);
    hero.attack("super man");
    hero.takeDamage(5);
    return (0);
}