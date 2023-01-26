/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:04:42 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/26 13:36:17 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//default
ClapTrap::ClapTrap(): _name(NULL), _hp(10), _mana(10), _atk(0)
{
	std::cout << "default got created\n";
}

//constructor
ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _mana(10), _atk(0)
{
	std::cout << "constructor " << this->_name << " has been created\n";
}

//copy constructor
ClapTrap::ClapTrap(ClapTrap & first)
{
	std::cout << " copy "  << this->_name << " has been created\n";
	*this = first;
}

//destrtuctor
ClapTrap::~ClapTrap()
{
	std::cout << "destructor: \n";
	std::cout << this->_name << " is now destroyed...\n";
}

//operator
ClapTrap & ClapTrap::operator=(ClapTrap & rhs)
{
	std::cout << "ClapTrap Operator =" << std::endl;
	_name = rhs._name;
	_hp = rhs._hp;
	_mana = rhs._mana;
	_atk = rhs._atk;
	return (*this);
}

void 		ClapTrap::attack(std::string const& target)
{
	if (this->_hp == 0)
	{
		std::cout << this->_name << " is dead\n";
		return;
	}
	if (this->_mana < 2)
	{
		std::cout << this->_name << " no mana left to attack\n";
		std::cout << this->_name << " has " << this->_mana << " mana\n";
		return;
	}
	else
	{
		this->_mana -= 1;
		std::cout << this->_name << " attack " << target;
		std::cout << ", causing " << this->_atk << " damages \n";
	}
}


void 		ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp == 0)
	{
		std::cout << this->_name << " is dead\n";
		return;
	}
	if ((int)amount > this->_hp)
		this->_hp = 0;
	else
		this->_hp -= (int)amount;
	std::cout << this->_name << " got hit for " << amount << " damages \n";
	std::cout << this->_name << " has " << _hp << " hp left \n";
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hp <= 0)
	{
		std::cout << this->_name << " can't heal because he is dead\n";
		return;
	}
	if (this->_mana < 1 || this->_hp <= 0)
	{
		std::cout << this->_name << " no mana left to heal\n";
		return;
	}
	this->_hp += (int)amount;
	this->_mana -= 1;
	std::cout << this->_name << " got repaired for " << amount << " hp\n";
	std::cout << this->_name << " has " << _hp << " left\n";
}