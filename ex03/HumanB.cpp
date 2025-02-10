/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-10 05:27:27 by tobaba            #+#    #+#             */
/*   Updated: 2025-02-10 05:27:27 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name_p(name), weapon_p(NULL)
{
}

void HumanB::attack()
{
	if (weapon_p)
		std::cout << name_p << " attacks with their " << (*weapon_p).getType() << '\n';
	else
		std::cout << name_p << " attacks with their " << "heart" << '\n';
}

void	HumanB::setWeapon(Weapon &weapon)
{
	weapon_p = &weapon;
}
