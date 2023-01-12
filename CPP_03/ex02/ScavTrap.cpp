#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(ScavTrap const& first):
	ClapTrap(first._name, first._hp, first._mana, first._atk)
{
	std::cout << " ScavTrap copy "  << this->_name << " has been created\n";
}

ScavTrap::ScavTrap(std::string name):
	ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap constructor " << this->_name << " has been created\n";
}

ScavTrap::ScavTrap():
	ClapTrap("", 100, 50, 20)
{
	std::cout << "ScavTrap default got created\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor: \n";
	std::cout << this->_name << " is now destroyed...\n";
}


void 		ScavTrap::attack(std::string const& target)
{
	if (this->_mana < 2)
	{
		std::cout << "ScavTrap " << this->_name << " no mana left to attack\n";
		std::cout << "ScavTrap " << this->_name << " has " << this->_mana << " mana\n";
	}
	else
	{
		this->_mana -= 1;
		std::cout << "ScavTrap " << this->_name << " PEWPEWPEW " << target;
		std::cout << ", causing " << this->_atk << " damages \n";
	}
}

void 		ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now on guard duty\n";
}