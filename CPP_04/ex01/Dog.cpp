/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:57:04 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/19 15:04:51 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(Dog &og) : Animal(og.getType())
{
	this->_brain = new Brain(*og._brain);
	std::cout << "Dog copy constructor called\n";
}

Dog::Dog(void): Animal("Dog")
{
	this->_brain = new Brain;
	std::cout << "Dog default constructor called\n";
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destructor called\n";
}

Dog	&Dog::operator=(Dog &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << this->_type << " ->Bark Bark Bark\n";
}