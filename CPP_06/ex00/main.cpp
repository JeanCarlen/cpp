/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:02:52 by jcarlen           #+#    #+#             */
/*   Updated: 2023/02/02 14:06:48 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

int main(int ac, char **av)
{

	if (ac != 2)
	{
		std::cout << "Wrong syntax." << std::endl;
		return 0;
	}
	else
	{
		Converter Converter(av[1]);
	}
}