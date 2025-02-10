/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-10 05:26:05 by tobaba            #+#    #+#             */
/*   Updated: 2025-02-10 05:26:05 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string	name_p;
		Weapon		&weapon_p;
	public:
		HumanA(std::string name, Weapon &weapon);
		void	attack();
};

#endif
