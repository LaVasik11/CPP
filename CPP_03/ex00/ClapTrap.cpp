/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkankia <gkankia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 15:17:01 by gkankia           #+#    #+#             */
/*   Updated: 2025/07/24 16:49:15 by gkankia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Default constructor called" << std::endl;
    this->name = name;
    this->hp = 10;
    this->ep = 10;
    this->damage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
    *this = src;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const &rSym)
{
    if (this != &rSym)
        this->name = rSym.name;
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->damage << " points of damage!" << std::endl;
    this->ep--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->name << " take " << amount << " damage!" << std::endl;
    this->hp -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
     std::cout << "ClapTrap " << this->name << " repaired " << amount << " hp!" << std::endl;
     this->ep--;
     this->hp += amount;
}