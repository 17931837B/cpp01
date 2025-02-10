/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-10 05:26:21 by tobaba            #+#    #+#             */
/*   Updated: 2025-02-10 05:26:21 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie1;
	
	zombie1 = newZombie("Foo");
	zombie1->announce();
	randomChump("faa");
	delete zombie1;
	return (0);
}
