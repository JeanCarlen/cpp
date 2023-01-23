/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeancarlen <jeancarlen@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:06:29 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/20 13:33:05 by jeancarlen       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout << "AAnimal type constructor called\n";
}

AAnimal::AAnimal(AAnimal const &og)
{
	this->_type = og._type;
	std::cout << "AAnimal copy constructor called\n";
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal destructor called\n";
}

AAnimal &AAnimal::operator=(AAnimal const &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

std::string	AAnimal::getType() const
{
	return (this->_type);
}

void	AAnimal::makeSound(void) const
{
	std::cout << this->_type << ": ...Generic AAnimal sound...\n";
}