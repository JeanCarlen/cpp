/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:03:01 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/26 13:48:11 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

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
	if (this->_hp == 0)
	{
		std::cout << this->_name << " is dead\n";
		return;
	}
	if (this->_mana < 1)
	{
		std::cout << this->_name << " no mana left to attack\n";
		std::cout << this->_name << " has " << this->_mana << " mana\n";
		return;
	}
	else
	{
		this->_mana -= 1;
		std::cout << this->_name << " hit with a stick " << target;
		std::cout << ", causing " << this->_atk << " damages \n";
	}
}

void	FragTrap::highFivesGuys()
{
	std::cout << this->_name << " raise his hand in hope of a highfives\n";
}