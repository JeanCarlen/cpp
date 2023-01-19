/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:14:10 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/16 12:14:12 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

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