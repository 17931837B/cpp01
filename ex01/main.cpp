/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-10 05:26:44 by tobaba            #+#    #+#             */
/*   Updated: 2025-02-10 05:26:44 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

int	main(void)
{
	int			N;
	std::string	name;
	Zombie		*zom;
	int			i;

	N = 10;
	name = "Foo";
	zom = zombieHorde(N, name);
	i = 0;
	while (i < N)
	{
		zom[i].announce();
		i++;
	}
	delete[] zom;
	return (0);
}
