/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkankia <gkankia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 15:22:48 by gkankia           #+#    #+#             */
/*   Updated: 2025/08/05 15:51:03 by gkankia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap 
{
	public:
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &src);
		~ScavTrap();

		ScavTrap & operator=(ScavTrap const &rSym);
		
		void	attack(const std::string &target);
		void	guardGate();
	private:
};

#endif