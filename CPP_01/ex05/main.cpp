/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:19:14 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/16 13:08:05 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int main( void )
{
	std::string	inpt;
	Harl		harl;

	do
	{
		std::cout << "Enter a level: ";
		std::cin >> inpt;
		harl.complain(inpt);
	} while 
	(inpt.compare("exit"));

	return (0);
}