/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:04:32 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/26 13:48:16 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{

	ClapTrap claptrap1("Ben");
	ClapTrap claptrap2("Frank");
	std::cout << "\n================\n"<< std::endl;

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

	std::cout << "\n\n---------------\n\n"<< std::endl;
	claptrap1.attack("Frank");
	claptrap2.takeDamage(0);
	std::cout << "\n\n---------------\n\n"<< std::endl;
	claptrap2.beRepaired(1);
	claptrap2.beRepaired(1);

	std::cout << "\n\n---------------\n\n"<< std::endl;
	claptrap2.attack("Ben");
	claptrap1.takeDamage(0);
	std::cout << "\n\n---------------\n\n"<< std::endl;
	claptrap2.attack("Ben");
	claptrap1.takeDamage(0);
	std::cout << "\n\n---------------\n\n"<< std::endl;

	claptrap1.beRepaired(1);
	claptrap1.beRepaired(1);
	std::cout << "\n\n---------------\n\n"<< std::endl;
	claptrap1.attack("Frank");
	claptrap2.takeDamage(0);
	std::cout << "\n\n---------------\n\n"<< std::endl;
	claptrap2.beRepaired(1);
	claptrap2.beRepaired(1);
	std::cout << "\n\n---------------\n\n"<< std::endl;
	claptrap2.attack("Ben");
	claptrap1.takeDamage(0);
	std::cout << "\n\n---------------\n\n"<< std::endl;
	claptrap2.attack("Ben");
	claptrap1.takeDamage(0);
	std::cout << "\n\n---------------\n\n"<< std::endl;

	claptrap1.beRepaired(1);
	claptrap1.beRepaired(1);

	std::cout << std::endl;
	return (0);
}