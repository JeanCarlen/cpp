/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:00:12 by jeancarlen        #+#    #+#             */
/*   Updated: 2023/02/01 11:03:49 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

std::string const	ShrubberyCreationForm::_tree =
	"    c@@@@@@@\n"
	"  C@@@@@@@ //@@@@@*\n"
	" c@@@@@@@@\\@@@@@0@@@@*\n"
	" C@@0@@@@/@@@@@@I@@@@@@@@*\n"
	"    c@@@@@@@  /@@@@@@@*\n"
	"      \\\\\\//  /@@@@@@@*\n"
	"        \\\\\\////\n"
	"         |||/\\\n"
	"         |||\\/\n"
	"         |||||\n"
	"   .....//||||\\....";

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
	Form("Shrubbery Creation", 145, 137)
{
	this->_target = target;
	std::cout << "Shrubbery Creation form constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &og):
	Form(og), _target(og.getTarget())
{
	std::cout << "Shrubbery Creation form copy constructor called\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery Creation Form destructor called\n";
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	(void)rhs;
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	if (executor.getGrade() > this->getExecGrade())
		throw Bureaucrat::GradeTooLowException();
	else if (this->getSigned() == 0)
		throw Form::NotSignedException();
	else
	{
		std::cout << "generating some trees on " << this->_target << std::endl;
		std::ofstream out;
		out.open((this->getTarget() + "_shrubbery").c_str(), std::ofstream::in | std::ofstream::trunc);
		out << ShrubberyCreationForm::_tree;
		out.close();
	}
}
