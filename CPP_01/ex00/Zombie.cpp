#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name)
{
	std::cout << _name << ": named\n";
}

Zombie::Zombie()
{
	std::cout << ": standard\n";
	return;
}

Zombie::~Zombie()
{
	std::cout << _name << ": is now dead\n";
	return ;
}

void	Zombie::announce() const
{
	std::cout << _name << ":  BraiiiiiiinnnzzzZ...\n";
	return ;
}
