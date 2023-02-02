/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:03:01 by jcarlen           #+#    #+#             */
/*   Updated: 2023/02/02 16:33:51 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter()
{
	std::cout << "Converter default constructor called" << std::endl;
	return ;
}

Converter::~Converter()
{
	std::cout << "Converter destructor called" << std::endl;
	return ;
}

Converter::Converter(const Converter &og)
{
	*this = og;
}

Converter &Converter::operator=(const Converter &rhs)
{
	(void)rhs;
	return *this;
}

Converter::Converter(std::string av)
{
	if (av == "nan" || av == "+inf" || av == "-inf" || av == "inf")
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : " << av + "f" << std::endl;
		std::cout << "double : " << av << std::endl;
		return ;
	}
	else if (av == "nanf" || av == "+inff" || av == "-inff" || av == "inff")
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : " << av << std::endl;
		std::cout << "double : " << av.substr(0, av.length() - 1) << std::endl;
		return ;
	}
	this->PrintValue(av);
}

void Converter::PrintValue(std::string av)
{
	double value = 0.0;
	char c;
	char cc;
	int i;
	long ii = 0;
	float f;

	if (std::isprint(av[1]))
		value = std::stod(av.c_str());
	else
		value = std::atof(av.c_str());
	c = static_cast<char>(value);
	i = static_cast<int>(value);
	f = static_cast<float>(value);


	std::cout << "c : " << c << "i : " << i << "f : "<< f << std::endl;
	std::cout << "ii : " << ii << std::endl;
	std::cout << "char : ";
	if (std::isnan(value) || std::isinf(value))
		std::cout << " impossible." << std::endl;
	else if(av.length() == 1 && std::isprint(av[0]))
	{
		cc = av[0];
		std::cout << "'" << cc << "'" << std::endl;
	}
	else if (!std::isprint(c) || i > 126)
		std::cout << " non printable." << std::endl;
	else
		std::cout << "'" << static_cast<char>(value) << "'" << std::endl;
	std::cout << "int : ";
    if (std::isnan(value) || std::isinf(value) || value > INT_MAX || value < INT_MIN)
		std::cout << "impossible." << std::endl;
	else if(ii >= 32 && ii <= 127)
		std::cout << "'" << ii << "'" << std::endl;
	else
		std::cout << static_cast<int>(value) << std::endl;

	std::cout << "float : ";
	if (std::isnan(value) || std::isinf(value))
		std::cout << static_cast<float>(value) << "f" << std::endl;
	else if (value == i)
        std::cout << static_cast<float>(value) << ".0f" << std::endl;
    else
		std::cout << static_cast<float>(value) << "f" << std::endl;
	std::cout << "double : ";
    if (std::isnan(value) || std::isinf(value))
		std::cout << static_cast<double>(value) << "f" << std::endl;
	else if (value == (int)value)
	    std::cout << static_cast<double>(value) << ".0" << std::endl;
    else
        std::cout << static_cast<double>(value) << std::endl;
}
