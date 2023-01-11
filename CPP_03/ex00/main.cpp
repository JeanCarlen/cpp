#include "ClapTrap.hpp"

int	main(void)
{

	ClapTrap claptrap1("Ben");
	ClapTrap claptrap2("Frank");

	std::cout << std::endl;
	claptrap1.beRepaired(1);
	claptrap1.beRepaired(1);
	claptrap1.beRepaired(1);
	claptrap1.beRepaired(1);
	claptrap1.beRepaired(1);
	claptrap1.beRepaired(1);
	claptrap1.beRepaired(1);
	claptrap1.beRepaired(1);
	claptrap1.beRepaired(1);
	claptrap1.beRepaired(1);

	claptrap1.attack("Frank");
	claptrap2.takeDamage(0);
	claptrap2.beRepaired(1);
	claptrap2.beRepaired(1);

	claptrap2.attack("Ben");
	claptrap1.takeDamage(0);
	claptrap2.attack("Ben");
	claptrap1.takeDamage(0);
	claptrap2.attack("Ben");

	claptrap1.beRepaired(1);
	claptrap1.beRepaired(1);
	claptrap1.attack("Frank");
	claptrap2.takeDamage(0);
	claptrap2.beRepaired(1);
	claptrap2.beRepaired(1);

	claptrap2.attack("Ben");
	claptrap1.takeDamage(0);
	claptrap2.attack("Ben");
	claptrap1.takeDamage(0);
	claptrap2.attack("Ben");

	claptrap1.beRepaired(1);
	claptrap1.beRepaired(1);

	std::cout << std::endl;
	return (0);
}