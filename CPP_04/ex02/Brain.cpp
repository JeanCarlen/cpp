/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeancarlen <jeancarlen@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:20:57 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/20 12:42:57 by jeancarlen       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		_ideas[i].clear();
	std::cout << "Brain constructor called\n";
}

Brain::Brain(Brain const &og)
{
	
	this->_type = og._type;
	std::cout << "Brain copy constructor called\n";
}

Brain::~Brain()
{
	for (int i = 0; i < 100; i++)
	_ideas[i].clear();
	std::cout << "Brain destructor called\n";
}

Brain& Brain::operator=(Brain const &rhs)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = rhs._ideas[i];
	return (*this);
}

void	Brain::setIdea(int i, std::string val)
{
	if (i < 100)
		this->_ideas[i] = val;
}

std::string	Brain::getIdea(int i)
{
	if (i < 100)
		return (this->_ideas[i]);
	return (0);
}