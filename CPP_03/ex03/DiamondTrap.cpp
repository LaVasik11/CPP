/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: georgy-kankiya <georgy-kankiya@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 17:17:54 by gkankia           #+#    #+#             */
/*   Updated: 2025/08/15 22:16:31 by georgy-kank      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap constructor called for " << name << std::endl;
	this->name = ClapTrap::name;
	this->hp = FragTrap::hp;
	this->ep = ScavTrap::ep;
	this->damage = FragTrap::damage;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	*this = src;
}

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap Defaut constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called for " << this->name << std::endl;
}

DiamondTrap &	DiamondTrap::operator=(DiamondTrap const &rSym)
{
	if (this != &rSym) {
		this->name = rSym.getName();
		this->hp = rSym.getHitPoints();
		this->ep = rSym.getEnergyPoints();
		this->damage = rSym.getAttackDamage();
	}
	return (*this);
}

void    DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name: " << this->name << std::endl;
    std::cout << "DiamondTrap ClapTrap name: " << ClapTrap::name << std::endl;
}