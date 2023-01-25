/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 14:33:44 by jeancarlen        #+#    #+#             */
/*   Updated: 2023/01/24 12:2:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << "-----------------------\n" << std::endl;
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
		std::cerr << "john => " <<e.what() << '\n';
	}
	std::cout << "-----------------------\n" << std::endl;
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
		std::cerr << "johny => " << e.what() << '\n';
	}
	std::cout << "-----------------------\n" << std::endl;
	Bureaucrat Bureaucrat3("middle", 75);
	try
	{
		std::cout << Bureaucrat3 << std::endl;
		Bureaucrat3.incrementGrade();
		std::cout << Bureaucrat3 << std::endl;
		Bureaucrat3.decrementGrade();
		std::cout << Bureaucrat3 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
