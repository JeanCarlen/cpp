#ifndef FragTrap_HPP
# define FragTrap_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
			FragTrap(FragTrap const& first);
			FragTrap(std::string name);
			FragTrap();
			~FragTrap();

			void	attack(const std::string& target);
			void	highFivesGuys(void);
};

#endif