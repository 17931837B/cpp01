#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name_p(name), weapon_p(weapon)
{
}

void HumanA::attack()
{
	std::string	weapon;

	weapon = weapon_p.getType();
	if (weapon == "")
		std::cout << name_p << " attacks with their " << "heart" << std::endl;
	else
		std::cout << name_p << " attacks with their " << weapon << std::endl;
}