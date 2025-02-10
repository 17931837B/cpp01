/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-10 05:27:09 by tobaba            #+#    #+#             */
/*   Updated: 2025-02-10 05:27:09 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*zombie;
	int		i;

	if (N < 0)
		N = 0;
	zombie = new Zombie[N];
	i = 0;
	while (i < N)
	{
		zombie[i] = Zombie(name);
		i++;
	}
	return (zombie);
}
