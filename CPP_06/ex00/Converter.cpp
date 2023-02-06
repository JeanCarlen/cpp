/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeancarlen <jeancarlen@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:03:01 by jcarlen           #+#    #+#             */
/*   Updated: 2023/02/03 12:47:56 by jeancarlen       ###   ########.fr       */
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
	this->_value = av;
	if (this->_value == "nan" || this->_value == "+inf" || this->_value == "-inf" || this->_value == "inf")
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : " << this->_value + "f" << std::endl;
		std::cout << "double : " << this->_value << std::endl;
		return ;
	}
	else if (this->_value == "nanf" || this->_value == "+inff" || this->_value == "-inff" || this->_value == "inff")
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : " << this->_value << std::endl;
		std::cout << "double : " << this->_value.substr(0, this->_value.length() - 1) << std::endl;
		return ;
	}
	PrintValue();
}

void Converter::PrintValue(void)
{
	castChar();
	castInt();
	castFloat();
	castDouble();
}

void Converter::castChar(void)
{
	try
	{
		if (this->_value.length() == 1 && isprint(this->_value[0]))
		{
			
			std::cout << "char: '" << this->_value[0] << "'" << std::endl;
			return ;
		}
		if (stoi(this->_value) >= 255)
			throw "char: Overflow";
		int str = stoi(this->_value);
		if (str < 32 || str > 127)
		{
			std::cout << "char: Non Displayable" << std::endl;
			return ;
		}
		char res = static_cast<char>(str);
		std::cout << "char: '" << res << "'" << std::endl;
	}
	catch(...)
	{
		std::cout << "char : impossible" << std::endl;
	}
}

void Converter::castInt(void)
{
	try
	{
		if (this->_value.length() == 1 && isalpha(this->_value[0]))
		{
			std::cout << "int: " << static_cast<int>(this->_value[0]) << std::endl;
			return ;
		}
		int num = stoi(this->_value);
		int res = static_cast<int>(num);
		std::cout << "int: " << res << std::endl;
	}
	catch(...)
	{
		std::cout << "int : impossible" << std::endl;
	}
}

void Converter::castFloat(void)
{
	try
	{
		if (this->_value.length() == 1 && isalpha(this->_value[0]))
		{
			std::cout << "float: " << static_cast<float>(this->_value[0]) << ".0f" << std::endl;
			return ;
		}
		float num = stof(this->_value);
		float res = static_cast<float>(num);
		if (num == stoi(this->_value))
			std::cout << "float: " << res << ".0f" << std::endl;
		else
			std::cout << "float: " << res << "f" << std::endl;
	}
	catch(...)
	{
		std::cout << "float: " << this->_value << "f" << std::endl;
	}
}

void Converter::castDouble(void)
{
	try
	{
		if (this->_value.length() == 1 && isalpha(this->_value[0])){			
			std::cout << "int: " << static_cast<double>(this->_value[0]) << ".0" << std::endl;
			return ;
		}
		double num = stod(this->_value);
		double res = static_cast<double>(num);
		if (num == stoi(this->_value))
			std::cout << "double: " << res << ".0" << std::endl;
		else
			std::cout << "double: " << res << std::endl;
	}
	catch(...)
	{
		std::cout << "double: " << this->_value << std::endl;
	}
}
