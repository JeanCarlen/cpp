/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:06:29 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/19 14:06:47 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal type constructor called\n";
}

Animal::Animal(Animal const &og)
{
	this->_type = og._type;
	std::cout << "Animal copy constructor called\n";
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called\n";
}

Animal &Animal::operator=(Animal const &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

std::string	Animal::getType() const
{
	return (this->_type);
}

void	Animal::makeSound(void) const
{
	std::cout << this->_type << ": ...Generic animal sound...\n";
}