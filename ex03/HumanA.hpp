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
