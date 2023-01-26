/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:03:21 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/26 13:55:10 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"


int	main(void)
{
	ScavTrap Scavtrap1("ABBA");
	ScavTrap Scavtrap2("OTTO");
	FragTrap Fragtrap1("Filthy Frank");
	std::cout << "\n================\n"<< std::endl;

	std::cout << std::endl;

	std::cout << "\n\n---------------\n\n"<< std::endl;
	Scavtrap1.attack("ABBA");
	Scavtrap2.takeDamage(20);
	std::cout << "\n\n---------------\n\n"<< std::endl;
	Scavtrap2.beRepaired(1);
	std::cout << "\n\n---------------\n\n"<< std::endl;
	Scavtrap2.attack("ABBA");
	Scavtrap1.takeDamage(20);
	std::cout << "\n\n---------------\n\n"<< std::endl;
	Scavtrap2.attack("ABBA");
	Scavtrap1.takeDamage(20);
	std::cout << "\n\n---------------\n\n"<< std::endl;
	Scavtrap2.attack("ABBA");
	Scavtrap1.takeDamage(20);
	std::cout << "\n\n---------------\n\n"<< std::endl;

	Scavtrap1.beRepaired(1);
	std::cout << "\n\n---------------\n\n"<< std::endl;
	Scavtrap1.attack("OTTO");
	Scavtrap2.takeDamage(0);
	std::cout << "\n\n---------------\n\n"<< std::endl;
	Scavtrap2.beRepaired(1);

	std::cout << "\n\n---------------\n\n"<< std::endl;
	Scavtrap2.attack("ABBA");
	Scavtrap1.takeDamage(20);
	std::cout << "\n\n---------------\n\n"<< std::endl;
	Scavtrap2.attack("ABBA");
	Scavtrap1.takeDamage(20);
	std::cout << "\n\n---------------\n\n"<< std::endl;
	Scavtrap2.attack("ABBA");
	Scavtrap1.takeDamage(20);
	std::cout << "\n\n---------------\n\n"<< std::endl;

	Scavtrap1.beRepaired(1);
	Scavtrap2.guardGate();
	std::cout << "\n\n---------------\n\n"<< std::endl;
	Fragtrap1.attack("OTTO");
	Scavtrap2.takeDamage(30);
	std::cout << "\n\n---------------\n\n"<< std::endl;
	Fragtrap1.beRepaired(1);
	Fragtrap1.highFivesGuys();

	std::cout << std::endl;
	return (0);
}