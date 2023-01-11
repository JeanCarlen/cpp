#include "ScavTrap.hpp"
#include "ClapTrap.hpp"


int	main(void)
{

	ScavTrap Scavtrap1("CT");
	ScavTrap Scavtrap2("ST");

	std::cout << std::endl;

	Scavtrap1.attack("ST");
	Scavtrap2.takeDamage(99999);
	Scavtrap2.beRepaired(1);
	Scavtrap2.attack("CT");
	Scavtrap1.takeDamage(20);
	Scavtrap2.attack("CT");
	Scavtrap1.takeDamage(20);
	Scavtrap2.attack("CT");

	Scavtrap1.beRepaired(1);
	Scavtrap1.attack("CT");
	Scavtrap2.takeDamage(0);
	Scavtrap2.beRepaired(1);

	Scavtrap2.attack("CT");
	Scavtrap1.takeDamage(20);
	Scavtrap2.attack("CT");
	Scavtrap1.takeDamage(20);
	Scavtrap2.attack("CT");

	Scavtrap1.beRepaired(1);
	Scavtrap2.guardGate();

	std::cout << std::endl;
	return (0);
}