/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkankia <gkankia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 17:17:54 by gkankia           #+#    #+#             */
/*   Updated: 2025/08/13 17:24:12 by gkankia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "DiamondTrap constructor called for " << name << std::endl;
	this->name = name;
	this->hp = 100;
	this->ep = 50;
	this->damage = 20;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(src.getName())
{
	*this = src;
}

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap Defaut constructor called" << std::endl;
    this->hp = 100;
    this->ep = 50;
    this->damage = 20;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called for " << this->name << std::endl;
}

DiamondTrap &	DiamondTrap::operator=(DiamondTrap const &rSym) {
	if (this != &rSym) {
		this->name = rSym.getName();
		this->hp = rSym.getHitPoints();
		this->ep = rSym.getEnergyPoints();
		this->damage = rSym.getAttackDamage();
	}
	return *this;
}

void    DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name: " << this->name << std::endl;
    std::cout << "DiamondTrap ClapTrap name: " << ClapTrap::getName() << std::endl;
}