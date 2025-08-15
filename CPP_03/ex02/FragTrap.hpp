/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: georgy-kankiya <georgy-kankiya@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 15:42:29 by gkankia           #+#    #+#             */
/*   Updated: 2025/08/15 22:19:34 by georgy-kank      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap 
{
	public:
		FragTrap(std::string name);
		FragTrap(FragTrap const &src);
		FragTrap();
		~FragTrap();

		FragTrap & operator=(FragTrap const &rSym);
		
		void	attack(const std::string &target);
        void highFivesGuys(void);

    private:
};

#endif