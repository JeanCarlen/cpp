/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:55:14 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/19 15:02:12 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(Cat &og) : Animal(og.getType())
{
	this->_brain = new Brain(*og._brain);
	std::cout << "Cat copy constructor called\n";
}

Cat::Cat(void): Animal("Cat")
{
	this->_brain = new Brain;
	std::cout << "Cat default constructor called\n";
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destructor called\n";
}

Cat	&Cat::operator=(Cat &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << this->_type << " -> Mew mew mew\n";
}