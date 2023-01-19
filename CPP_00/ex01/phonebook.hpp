/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:12:50 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/16 11:12:52 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include <iostream>
#include "contact.hpp"
#include <iomanip>
#include <sstream>


class PhoneBook
{
	private:
		contact contacts[8];
		int index;
	public:
		PhoneBook();
		~PhoneBook();
		void add_contact();
		void search_contact();
		void print_PhoneBook();
		void display();
};


#endif
