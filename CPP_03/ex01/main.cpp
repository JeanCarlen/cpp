/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:04:01 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/26 13:48:15 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"


int	main(void)
{
	ScavTrap Scavtrap1("ABBA");
	ScavTrap Scavtrap2("OTTO");
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

	std::cout << std::endl;
	return (0);
}