/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkankia <gkankia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 16:02:51 by gkankia           #+#    #+#             */
/*   Updated: 2025/07/28 15:50:21 by gkankia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include "iostream"

class ClapTrap
{
    public:
        ClapTrap(std::string name);
        ClapTrap();
		~ClapTrap();
		ClapTrap(ClapTrap const &src);
		ClapTrap&	operator=(ClapTrap const &rSym);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    private:
        std::string name;
        int         hp;
        int         ep;
        int         damage;
};

#endif