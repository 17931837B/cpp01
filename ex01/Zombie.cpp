#include "Zombie.hpp"

Zombie::Zombie()
{
	this->name = "";
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
