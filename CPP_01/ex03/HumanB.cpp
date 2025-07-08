/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkankia <gkankia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 16:54:57 by gkankia           #+#    #+#             */
/*   Updated: 2025/07/08 17:55:34 by gkankia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name) {}

void    HumanB::setWeapon(Weapon *weapon)
{
    this->weapon = weapon;
}

void    HumanB::attack(void) const
{
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}