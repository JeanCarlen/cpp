/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:49:36 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/23 15:51:23 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

Form::~Form(void)
{
	std::cout << "Form destructor called" << std::endl;
	std::cout << _name << ", " << _signe << ", " << _exec << "\n";
	return ;
}

Form::Form(std::string name, int signe, int exec): _name(name), _decision(0), _signe(signe), _exec(exec)
{
	std::cout << "Form constructor called" << std::endl;
	if ( _signe < 1)
		throw Bureaucrat::GradeTooHighException();
	if ( _signe > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Bureaucrate : " << _name << ", " << _signe << ", " << _exec << "\n";
}

Form::Form(Form &og): 
	_name(og.getName()), _decision(og.getSigned()), _signe(og.getSigneGrade()), _exec(og.getExecGrade())
{
	std::cout << "Copy form constructor called: " << _name << ", " << _decision << ", " << _signe << ", " << _exec << "\n";
}

Form& Form::operator=(Form const &rhs)
{
	_decision = rhs.getSigned();
	return *this;
}

std::string	Form::getName(void) const
{
	return(this->_name);
}

bool	Form::getSigned(void) const
{
	return(this->_decision);
}

int Form::getExecGrade(void) const
{
	return(this->_exec);
}

int Form::getSigneGrade(void) const
{
	return(this->_signe);
}

void Form::beSigned(Bureaucrat &signer)
{
	if(signer.getGrade() < this->_signe)
		std::cout << signer.getName() << ": signed ->" << this->_name << "\n";
		this->_decision = 1;
	if(signer.getGrade() < this->_signe)
		throw Bureaucrat::GradeTooLowException();
}

std::ostream	&operator<<(std::ostream &o, Form &a)
{
	o << "Form name: " << a.getName() << "\n" << "Grade to sign: " << a.getSigneGrade() << "\n" << "Grade to execute: " << a.getExecGrade();
	return o;
}