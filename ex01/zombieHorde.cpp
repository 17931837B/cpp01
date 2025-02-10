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
