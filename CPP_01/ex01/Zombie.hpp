#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>
# include <iomanip>

class Zombie
{
	private:
			std::string _name;
	public:
			Zombie(std::string name);
			Zombie();
			~Zombie();
			void	announce(void) const;
			void	set_name(std::string name);
};

Zombie* zombieHorde(int x, std::string name);

#endif