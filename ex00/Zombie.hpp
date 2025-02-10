/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-10 05:25:34 by tobaba            #+#    #+#             */
/*   Updated: 2025-02-10 05:25:34 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <new>

class Zombie
{
private:
	std::string	name;
public:
	Zombie(std::string name);
	~Zombie();
	void announce(void);
};

void randomChump(std::string name);
Zombie *newZombie(std::string name);

#endif
