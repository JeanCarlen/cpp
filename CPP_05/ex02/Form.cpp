/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeancarlen <jeancarlen@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:49:36 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/24 14:19:16 by jeancarlen       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

Form::~Form(void)
{
	std::cout << "Form destructor called" << std::endl;
	//std::cout << _name << "\n" << " grade =>" << _signe << "\n" << " execute =>" << _exec << "\n";
	return ;
}

Form::Form(std::string name, int signe, int exec): _name(name), _decision(false), _signe(signe), _exec(exec)
{
	std::cout << "Form constructor called => " << _name << std::endl;
	if (_decision == false)
		std::cout << this->_name << ": is not signed yet" << std::endl;
	if ( _signe < 1)
		throw Bureaucrat::GradeTooHighException();
	if ( _signe > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << _name << "\n" << " grade =>" << _signe << "\n" << " execute =>" << _exec << "\n";
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
	{
		std::cout << signer.getName() << " signed " << this->_name << "\n";
		this->_decision = true;
	}
	if(signer.getGrade() > this->_signe)
		throw Bureaucrat::GradeTooLowException();
}

const char	*Form::NotSignedException::what() const throw()
{
	return ("Form is not signed");
}

std::ostream	&operator<<(std::ostream &o, Form &a)
{
	o << "Form => " << a.getName() << "\n" << " Grade to sign: " << a.getSigneGrade() << "\n" << " Grade to execute: " << a.getExecGrade() << "\n" << " Status: " << a.getSigned();
	return o;
}