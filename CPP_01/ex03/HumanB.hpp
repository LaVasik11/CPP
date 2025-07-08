/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkankia <gkankia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 17:46:45 by gkankia           #+#    #+#             */
/*   Updated: 2025/07/08 17:55:38 by gkankia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    public:
        HumanB(std::string name);
        void    attack(void) const;
        void    setWeapon(Weapon *weapon);

    private:
        Weapon      *weapon;
        std::string name;
};

#endif