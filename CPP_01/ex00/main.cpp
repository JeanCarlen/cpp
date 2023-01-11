#include "Zombie.hpp"

int	main(void)
{
	Zombie	*a1 = newZombie("a1");
	Zombie	a2("a2");
	Zombie	a3("a3");
	Zombie	a4;
	randomChump("a4");
	a1->announce();
	a2.announce();
	a3.announce();
	delete(a1);
	return (0);
}
