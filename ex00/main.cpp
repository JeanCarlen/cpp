/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 14:33:44 by jeancarlen        #+#    #+#             */
/*   Updated: 2023/01/23 11:33:37 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat Bureaucrat1("John", 1);
	try
	{
		std::cout << Bureaucrat1 << std::endl;
		std::cout << "incrementing john" << std::endl;
		Bureaucrat1.incrementGrade();
		std::cout << Bureaucrat1 << std::endl;
		std::cout << "decrementing john" << std::endl;
		Bureaucrat1.decrementGrade();
		std::cout << Bureaucrat1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Bureaucrat Bureaucrat2("Johny", 150);
	try
	{	
		std::cout << Bureaucrat2 << std::endl;
		std::cout << "decrementing johny" << std::endl;
		Bureaucrat2.decrementGrade();
		std::cout << Bureaucrat2 << std::endl;
		std::cout << "incrementing johny" << std::endl;
		Bureaucrat2.incrementGrade();
		std::cout << Bureaucrat2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Bureaucrat Bureaucrat3("middle", 75);
	try
	{
		std::cout << Bureaucrat3 << std::endl;
		std::cout << "incrementing middle" << std::endl;
		Bureaucrat3.incrementGrade();
		std::cout << Bureaucrat3 << std::endl;
		std::cout << "decrementing middle" << std::endl;
		Bureaucrat3.decrementGrade();
		std::cout << Bureaucrat3 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
