/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: georgy-kankiya <georgy-kankiya@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 15:09:52 by gkankia           #+#    #+#             */
/*   Updated: 2025/08/02 16:27:14 by georgy-kank      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap    hero("BatMan");

    hero.setAttackDamage(2);

    hero.attack("jocker");
    hero.takeDamage(3);
    hero.beRepaired(1);
    hero.beRepaired(1);
    hero.attack("super man");
    hero.takeDamage(5);
    hero.attack("super man");
    hero.takeDamage(7);
    hero.attack("super man");
    return (0);
}