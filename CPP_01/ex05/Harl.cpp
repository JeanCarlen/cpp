/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:19:02 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/16 13:06:37 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void) 
{
	std::cout << "Debug : I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !" << std::endl;
}

void	Harl::info(void) 
{
	std::cout << "Info : I cannot believe adding extra bacon costs more money. You didn t put enough bacon in my burger ! If you did, I wouldn t be asking for more !" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "Waring : I think I deserve to have some extra bacon for free. I ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void) 
{
	std::cout << "Error : This is unacceptable ! I want to speak to the manager now." << std::endl;
}

Harl::Harl()
{
	std::cout << "default construcor called" << std::endl;
}

Harl::~Harl()
{
	std::cout << "default destructor called" << std::endl;
}

void	Harl::complain( std:: string level ) {
	t_func  funcs[] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	while (i < 4 && levels[i].compare(level))
		i++ ;
	if (i < 4)
		(this->*funcs[i])();
}