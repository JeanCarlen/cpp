/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeancarlen <jeancarlen@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 14:33:44 by jeancarlen        #+#    #+#             */
/*   Updated: 2023/01/21 15:55:55 by jeancarlen       ###   ########.fr       */
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
	return (0);
}
