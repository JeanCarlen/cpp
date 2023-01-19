/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:12:42 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/16 11:23:07 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void alert_msg()
{
	std::cout << "this field can't be empty" << std::endl;
}

PhoneBook::PhoneBook()
{
	index = -1;
}

PhoneBook::~PhoneBook()
{
	return;
}

void PhoneBook::add_contact()
{
	contact contact;
	std::string fname, lname, nickname, phone, secret;
	do
	{
		std::cout << "Enter The First Name : ";
		if(!std::getline(std::cin, fname))
				exit(1);
		if(fname.empty())
			alert_msg();
	}
	while(fname.empty());
	contact.setfirstname(fname);

	do
	{
		std::cout << "Enter The Last Name : ";
		if(!std::getline(std::cin, lname))
			exit(1);
		if(lname.empty())
			alert_msg();
	}
	while(lname.empty());
	contact.setlastname(lname);

	do
	{
		std::cout << "Enter The Nickname : ";
		if (!std::getline(std::cin, nickname))
			exit(1);
		if (nickname.empty())
			alert_msg();
	}
	while(nickname.empty());
	contact.setnickname(nickname);

	do
	{
		std::cout << "Enter The Phone Number : ";
		if(!std::getline(std::cin, phone))
			exit(1);
		if(phone.empty())
			alert_msg();
	}
	while(phone.empty());
	contact.setphonenumber(phone);

	do
	{
		std::cout << "Enter The Darkest Secret : ";
		if(!std::getline(std::cin, secret))
			exit(1);
		if(secret.empty())
			alert_msg();
	}
	while(secret.empty());
	contact.setsecret(secret);
	if(index == 7)
		index = -1;
	contacts[(++index) % 8] = contact;
}


std::string truncate(std::string word, int width)
{
	if ((int)word.length() > width)
		return (word.substr(0, width - 1) + ".");
	else if ((int)word.length() < width)
		return (std::string(10 - (int)word.length(), ' ') + word);
	return (word);
}

void PhoneBook::display()
{
	int i = -1;
	std::cout << std::string(45, '=') << std::endl;
	std::cout << '|' << std::setw(10) << "id"
	<< '|' << std::setw(10) << "firstname"
	<< '|' << std::setw(10) << "lastname"
	<< '|' << std::setw(10) << "nickname" << '|' << std::endl;
	if (!contacts[7].getfirst_name().empty())
		index = 7;
	while(++i <= index)
	{
		std::cout << std::string(45, '=') << std::endl;
		std::cout << "|" << std::setw(10) << i << '|'
		<< truncate(contacts[i].getfirst_name(), 10) << '|'
		<< truncate(contacts[i].getlast_name(), 10) << '|'
		<< truncate(contacts[i].getnickname(), 10) <<  '|' << std::endl;
	}
	std::cout << std::string(45, '=') << std::endl;

}

void PhoneBook::search_contact()
{
	display();
	int id;
	std::string s_id;
	std::cout << "search a specific id :";

	if(!std::getline(std::cin, s_id))
		exit(1);
	if(s_id < "0" || s_id > "9")
	{
		std::cout << "Choose a existing ID\n";
		return ;
	}

	id = std::atoi(s_id.c_str());
	if(id <= index && id >= 0)
	{
		contact contact = this->contacts[id];
		std::cout << std::endl;
		std::cout <<  "first_name: " << contacts[id].getfirst_name() << std::endl;
		std::cout <<  "last_name: " << contacts[id].getlast_name() << std::endl;
		std::cout <<  "nickname: " << contacts[id].getnickname() << std::endl;
		std::cout <<  "phone_number: " << contacts[id].getphone_number() << std::endl;
		std::cout <<  "darkest_secret: " << contacts[id].getsecret() << std::endl;
		std::cout << std::endl;

	}
	else
		std::cout << "ID out of range\n";
}
