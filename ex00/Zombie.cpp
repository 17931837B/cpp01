/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-10 05:26:37 by tobaba            #+#    #+#             */
/*   Updated: 2025-02-10 05:26:37 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << "\"" << name << "\" Bye!\n";
}

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
