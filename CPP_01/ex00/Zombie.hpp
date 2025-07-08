/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkankia <gkankia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 17:47:31 by gkankia           #+#    #+#             */
/*   Updated: 2025/07/08 17:47:32 by gkankia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

typedef std::string str;

class Zombie {
	public:
		Zombie(str name);
		~Zombie();

		Zombie* newZombie(str name);
		void	randomChump(str name);
	private:
		void	announce();
		str	name;
};


#endif