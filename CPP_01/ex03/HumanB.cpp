/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:12:30 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/16 12:12:32 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// Constructor (HumanB = without weapon)
HumanB::HumanB(std::string name) : _name(name)
{
	this->_weapon = NULL;
}

// Destructor
HumanB::~HumanB()
{
	std::cout << _name << ": is now dead\n";
}

// NAME attacks with his WEAPON_TYPE
void	HumanB::attack() const
{
	if (this->_weapon)
	{
		std::cout << this->_name << " attacks with "<< (*(this->_weapon)).getType() << std::endl;
	}
	else
	{
		std::cout << this->_name << " has no weapon equiped "<< std::endl;
	}
	
}

void HumanB::setWeapon(Weapon &new_weapon)
{
	this->_weapon = &new_weapon;
}