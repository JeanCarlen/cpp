#include "Zombie.hpp"

Zombie* zombieHorde( int x, std::string name )
{
	Zombie	*horde = new Zombie[x];
	for (int i = 0; i < x; i++)
	{
		horde[i].set_name(name + " " + std::to_string(i + 1));
	}
	return (horde);
}