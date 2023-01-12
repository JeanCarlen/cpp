#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"


int	main(void)
{

	ScavTrap Scavtrap1("CT");
	ScavTrap Scavtrap2("ST");
	FragTrap Fragtrap1("Fabio");

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
	Fragtrap1.beRepaired(1);
	Fragtrap1.highFivesGuys();

	std::cout << std::endl;
	return (0);
}