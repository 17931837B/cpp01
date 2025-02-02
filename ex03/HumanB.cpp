#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name_p(name), weapon_p(NULL)
{
}
void HumanB::attack()
{
	if (weapon_p)
		std::cout << name_p << " attacks with their " << (*weapon_p).getType() << std::endl;
	else
		std::cout << name_p << " attacks with their " << "heart" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	weapon_p = &weapon;
}