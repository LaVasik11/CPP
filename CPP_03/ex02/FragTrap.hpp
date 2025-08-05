/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkankia <gkankia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 15:42:29 by gkankia           #+#    #+#             */
/*   Updated: 2025/08/05 15:50:08 by gkankia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap 
{
	public:
		FragTrap(std::string name);
		FragTrap(FragTrap const &src);
		~FragTrap();

		FragTrap & operator=(FragTrap const &rSym);
		
		void	attack(const std::string &target);
        void highFivesGuys(void);

    private:
};

#endif