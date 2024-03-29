/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:31:02 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/16 11:31:04 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name)
{
	std::cout << _name << ": named\n";
}

Zombie::Zombie()
{
	std::cout << ": standard\n";
	return;
}

Zombie::~Zombie()
{
	std::cout << _name << ": is now dead\n";
	return ;
}

void	Zombie::announce() const
{
	std::cout << _name << ":  BraiiiiiiinnnzzzZ...\n";
	return ;
}

void	Zombie::set_name(std::string name)
{
	_name = name;
}