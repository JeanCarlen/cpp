/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:03:01 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/26 16:56:30 by jcarlen          ###   ########.ch       */
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

Converter::Converter(Converter &og)
{
	*this = og;
}

Converter::Converter(const std::string& value): _value(value)
{
	std::cout << "Converter constructor called => " << std::endl;
}

Converter &Converter::operator=(Converter const &rhs)
{
	(void)rhs;
	return *this;
}

void Converter::PrintChar(std::string av)
{
	const char charV = Cchar();
	const float floatV = Cfloat();


	if (av == "nan" || av == "+inf" || av == "-inf" || av == "nanf" || av == "+inff" || av == "-inff")
	{
		std::cout << "int: impossible" << std::endl;
		std::cout << "char: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return;
	}
	if (floatV < CHAR_MIN || floatV > CHAR_MAX || isnan(floatV))
	{
		std::cout << "char: impossible" << std::endl;
	} 
	else if (isprint(charV)) 
	{
		std::cout << "char: '" << charV << "'" << std::endl;
	} 
	else 
	{
		std::cout << "char: non displayable" << std::endl;
	}
}

void Converter::PrintInt(std::string av)
{
	const int intV = Cint();
	const float floatV = Cfloat();
	const double doubleV = Cdouble();
	
	if (av == "nan" || av == "+inf" || av == "-inf" || av == "nanf" || av == "+inff" || av == "-inff")
		return;
	if (intV < INT_MIN || intV > INT_MAX || isnan(intV))
	{
		std::cout << "int: impossible" << std::endl;
	} 
	else
	{
		std::cout << "int: " << intV << std::endl;
	}

	if (floatV - intV == 0)
	{
		std::cout << "float: " << floatV << ".0f" << std::endl;
		std::cout << "double: " << doubleV << ".0" << std::endl;
	} 
	else 
	{
		std::cout << "float: " << floatV << "f" << std::endl;
		std::cout << "double: " << doubleV << std::endl;
	}
}

char Converter::Cchar() 
{
	return static_cast<char>(Cfloat());
}

int Converter::Cint() 
{
	return static_cast<int>(Cfloat());
}

float Converter::Cfloat() 
{
	return atof(_value.c_str());
}

double Converter::Cdouble() 
{
	return static_cast<double>(Cfloat());
}