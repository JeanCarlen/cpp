/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:58:26 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/19 14:14:45 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "WrongAnimal type constructor called\n";
}

WrongAnimal::WrongAnimal(WrongAnimal const &og)
{
	this->_type = og._type;
	std::cout << "WrongAnimal copy constructor called\n";
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called\n";
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

std::string	WrongAnimal::get_type() const
{
	return (this->_type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << this->_type << "-> Beep Boop Beep\n";
}