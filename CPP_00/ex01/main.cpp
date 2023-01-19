/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:12:17 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/16 13:07:37 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.hpp"
#include "phonebook.hpp"



int main (void)
{
	PhoneBook t_PhoneBook = PhoneBook();

	while(true)
	{
		std::string command;
		std::cout<< "Phonebook> ";

		if (!std::getline(std::cin, command))
			exit(1);
		if (command == "ADD")
			t_PhoneBook.add_contact();
		else if (command == "SEARCH")
			t_PhoneBook.search_contact();
		else if (command == "EXIT")
			exit(0);
	}
}
