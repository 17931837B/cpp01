/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-10 05:27:38 by tobaba            #+#    #+#             */
/*   Updated: 2025-02-10 05:27:38 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Weapon.hpp"

Weapon::Weapon()
{
	type_p = "";
}

Weapon::Weapon(std::string type)
{
	type_p = "";
	setType(type);
}

void Weapon::setType(std::string type)
{
	if (type.empty())
		type_p = "soul";
	else
		type_p = type;
}

const std::string &Weapon::getType()
{
	return (type_p);
}
