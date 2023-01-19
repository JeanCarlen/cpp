/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:14:27 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/16 12:14:28 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << "Creator called for: " << _type << std::endl;
}

Weapon::Weapon()
{
	std::cout << "Default creator called\n";
}

Weapon::~Weapon()
{
	std::cout << "Destructor called for: " << _type << std::endl;
}

std::string const &Weapon::getType() const
{
	return(this->_type);
}

void	Weapon::setType(std::string new_type)
{
	this->_type = new_type;
}