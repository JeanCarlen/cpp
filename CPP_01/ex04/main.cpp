/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:15:37 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/16 12:15:39 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>


std::string	ft_replace(std::string line, std::string s1, std::string s2)
{
	size_t	erase_length = s1.length();
	size_t	replace_length = s2.length();
	size_t	pos_search = 0;

	pos_search = line.find(s1);
	while (pos_search != std::string::npos)
	{
		line.erase(pos_search, erase_length);
		line.insert(pos_search, s2);
		pos_search = line.find(line, pos_search + replace_length);
	}
	return (line);
}


int main(int ac, char **av)
{
	std::ifstream	file(av[1]);
	std::string 	line;

	if (ac != 4)
	{
		std::cout << "synthax error: no empty argument or please use => file s1 s2\n";
		return (0);
	}

	std::string s1 = (std::string)av[2];
	std::string s2 = (std::string)av[3];

	if (!file.is_open())
	{
		std::cout << "Coulnd't open the input file" << std::endl;
		return (-1);
	}
	std::string	file_name = (std::string)av[1] + ".replace";
	std::ofstream	out;
	out.open(file_name, std::ios::out | std::ios::trunc);
	if(!out.is_open())
	{
		std::cout << "Coulnd't open the output file" << std::endl;
		return (-1);
	}
	while (std::getline(file, line))
	{
		line = ft_replace(line, s1, s2);
		out << line;
		if (file.peek() != EOF)
			out << std::endl;
	}
	out << std::endl;
	out.close();
	file.close();
	return (0);
}