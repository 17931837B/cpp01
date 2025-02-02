#include "Weapon.hpp"

Weapon::Weapon()
{
	type_p = "";
}

Weapon::Weapon(std::string type)
{
	setType(type);
}

void Weapon::setType(std::string type)
{
	type_p = type;
}

const std::string &Weapon::getType()
{
	return (type_p);
}