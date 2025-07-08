/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkankia <gkankia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 17:46:37 by gkankia           #+#    #+#             */
/*   Updated: 2025/07/08 17:46:38 by gkankia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
    Weapon  weapon1("Glock 17");
    Weapon  weapon2("Digle");

    HumanA Bob("Bob", weapon1);
    HumanB Bill("Bill");
    Bill.setWeapon(&weapon2);

    Bob.attack();
    Bill.attack();

    weapon1.setType("Knife");
    weapon2.setType("AK-47");

    Bob.attack();
    Bill.attack();

    return (0);
}