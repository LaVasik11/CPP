/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkankia <gkankia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 15:17:01 by gkankia           #+#    #+#             */
/*   Updated: 2025/07/28 16:07:16 by gkankia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Defaut constructor called for" << std::endl;
    this->hp = 10;
    this->ep = 10;
    this->damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor called for " << name << std::endl;
    this->name = name;
    this->hp = 10;
    this->ep = 10;
    this->damage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called for " << name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
    *this = src;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const &rSym)
{
    if (this != &rSym)
    {
        this->hp = rSym.hp;
        this->ep = rSym.ep;
        this->damage = rSym.damage;
    }
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (this->hp > 0)
    {
        if (this->ep > 0)
        {
            std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->damage << " points of damage!" << std::endl;
            this->ep--;
        }
        else
            std::cout << "ClapTrap " << this->name << " doesn't have enough energy points." << std::endl;
        std::cout << "ClapTrap " << this->name << " has " << this->ep << " energy points." << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hp > 0)
    {
        std::cout << "ClapTrap " << this->name << " take " << amount << " damage!" << std::endl;
        if (amount > (unsigned)this->hp)
        {
            this->hp = 0;
            std::cout << this->name << " is dead!" << std::endl;
        }
        else
            this->hp -= amount;
        std::cout << "ClapTrap " << this->name << " has " << this->hp << " hp." << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hp > 0)
    {
        if (this->ep > 0)
        {    
            std::cout << "ClapTrap " << this->name << " repaired " << amount << " hp!" << std::endl;
            this->ep--;
            this->hp += amount;
        }
        else
            std::cout << "ClapTrap " << this->name << " doesn't have enough energy points." << std::endl;
        std::cout << "ClapTrap " << this->name << " has " << this->ep << " energy points." << std::endl;
        std::cout << "ClapTrap " << this->name << " has " << this->hp << " hit points." << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
}