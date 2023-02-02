/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 14:33:44 by jeancarlen        #+#    #+#             */
/*   Updated: 2023/01/31 14:17:37 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include "Form.hpp"

int main( void )
{
	std::cout << "-------------------------------------------------\n\n";
	try 
	{
		Bureaucrat bureaucrat("Ash",11);
		Form form("Formulary one", 10, 20);
		bureaucrat.signForm(form);
		std::cout << form << std::endl;
	}
	catch (std::exception &e) 
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n-------------------------------------------------\n\n";
	try 
	{
		Bureaucrat bureaucrat("Steven", 2);
		Form form("Formulary two", 10, 20);
		bureaucrat.signForm(form);
		std::cout << form << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}