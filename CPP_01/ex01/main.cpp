#include "Zombie.hpp"

int	main(void)
{
	int i = 0;

	Zombie* horde;
	horde = zombieHorde(5, "need braiiiinzzzzzz!");
	for (i = 0; i < 5; i++)
		horde[i].announce();
	delete[] (horde);
}