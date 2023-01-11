#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		std::cout << "------------------\n";
		HumanA bob("Bob", club);
		bob.attack();
		std::cout << "------------------\n";
		club.setType("some other type of club");
		std::cout << "------------------\n";
		bob.attack();
		std::cout << "------------------\n";
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		std::cout << "------------------\n";
		jim.setWeapon(club);
		std::cout << "------------------\n";
		jim.attack();
		std::cout << "------------------\n";
		club.setType("some other type of club");
		std::cout << "------------------\n";
		jim.attack();
	}
}