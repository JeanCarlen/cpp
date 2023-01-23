/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:57:04 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/20 12:44:3 by marvin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(Dog &og) : AAnimal(og.getType())
{
	this->_brain = new Brain(*og._brain);
	std::cout << "Dog copy constructor called\n";
}

Dog::Dog(void): AAnimal("Dog")
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

void	Dog::setIdea(int i, std::string val)
{
	this->_brain->setIdea(i, val);
}

std::string	Dog::getIdea(int i)
{
	return (this->_brain->getIdea(i));
}
