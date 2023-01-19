/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:13:42 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/16 12:13:43 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// Constructor (HumanA = with weapon)
HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	std::cout << _name << ": running";
}

// Destructor
HumanA::~HumanA()
{
	std::cout << _name << ": is now dead\n";
}

// NAME attacks with his WEAPON_TYPE
void	HumanA::attack() const
{
	std::cout << this->_name << " attacks with his "
				<< this->_weapon.getType() << std::endl;
}