#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
			ScavTrap(ScavTrap const& first);
			ScavTrap(std::string name);
			ScavTrap();
			~ScavTrap();

			void	attack(const std::string& target);
			void	guardGate();
};

#endif