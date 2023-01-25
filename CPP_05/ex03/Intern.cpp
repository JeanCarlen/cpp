/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 12:59:43 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/25 14:19:45 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Intern default called" << std::endl;
}

Intern::~Intern(void)
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern::Intern(Intern & og)
{
	std::cout << "Copy intern has been created" << std::endl;
	*this = og;
}

Intern & Intern::operator=(Intern const &rhs)
{
	(void) rhs;
	std::cout << "Intern Operator =" << std::endl;
	return (*this);
}

static Form	*makePresident(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

static Form	*makeRobot(const std::string target)
{
	return (new RobotomyRequestForm(target));
}

static Form	*makeShrubbery(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::makeForm(const std::string form, const std::string target)
{
	Form *(*all_forms[])(const std::string target) = {&makePresident, &makeRobot, &makeShrubbery};
	std::string forms[] = {"presidential pardon", "robotomy request", "shrubbery creation"};

	for (int i = 0; i < 3; i++)
	{
		if (form == forms[i])
		{
			std::cout << "Intern creates " << form << " now" << std::endl;
			return (all_forms[i](target));
		}
	}
	std::cout << "Intern can not create a form called " << form <<  std::endl;
	return (NULL);
}