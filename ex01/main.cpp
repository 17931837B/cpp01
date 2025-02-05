#include "Zombie.hpp"

int	main(void)
{
	int			N;
	std::string	name;
	Zombie		*zom;
	int			i;

	N = 1;
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