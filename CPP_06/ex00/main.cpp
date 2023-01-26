/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:02:52 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/26 16:49:12 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"
#include <iostream>

int main(int ac, char **av)
{

	if (ac != 2)
	{
		std::cout << "Wrong syntax." << std::endl;
		return 0;
	}

	Converter value(av[1]);
	std::string	line(av[1]);

	value.PrintInt(line);
	value.PrintChar(line);
}