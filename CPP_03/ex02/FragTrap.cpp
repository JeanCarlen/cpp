#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(FragTrap const& first):
	ClapTrap(first._name, first._hp, first._mana, first._atk)
{
	std::cout << " FragTrap copy "  << this->_name << " has been created\n";
}

FragTrap::FragTrap(std::string name):
	ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap constructor " << this->_name << " has been created\n";
}

FragTrap::FragTrap():
	ClapTrap("", 100, 100, 30)
{
	std::cout << "FragTrap default got created\n";
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor: \n";
	std::cout << this->_name << " is now destroyed...\n";
}


void 		FragTrap::attack(std::string const& target)
{
	if (this->_mana < 2)
	{
		std::cout << "FragTrap " << this->_name << " no mana left to attack\n";
		std::cout << "FragTrap " << this->_name << " has " << this->_mana << " mana\n";
	}
	else
	{
		this->_mana -= 1;
		std::cout << "FragTrap " << this->_name << " hit with a stick " << target;
		std::cout << ", causing " << this->_atk << " damages \n";
	}
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap raise his hand in hope of a highfives\n";
}