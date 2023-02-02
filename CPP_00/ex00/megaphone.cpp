/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:11:40 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/26 17:03:50 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int ac, char **av)
{
	int i;
	int j;

	i = 0;
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else while (++i < ac)
	{
		j = 0;
		std::string	line(av[i]);
		while (av[i][j])
		{
			std::cout << static_cast<char>(std::toupper(line.at(j)));
			j++;
		}
	}
	std::cout << std::endl;
	return 0;	
}
