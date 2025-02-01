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