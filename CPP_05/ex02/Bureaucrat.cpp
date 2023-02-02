/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 14:32:45 by jeancarlen        #+#    #+#             */
/*   Updated: 2023/01/24 12:38:441 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat destructor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	std::cout << "Bureaucrat constructor called => " << _name << std::endl;
	std::cout << _name << "\n" << " grade => " << _grade << std::endl;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat &og):
	_name(og._name), _grade(og._grade)
{
	std::cout << "Bureaucrat copy constructor called\t" << "NAME: "
		<< this->_name << "\n" << " rank: "<< this->_grade << std::endl;
}

const std::string	Bureaucrat::getName(void) const
{
	return(this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::incrementGrade(void)
{
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
	{
		this->_grade -= 1;
		std::cout << "incrementing: " << this->_name << std::endl;
	}
	return ;
}

void	Bureaucrat::decrementGrade(void)
{
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
	{
		this->_grade += 1;
		std::cout << "decrementing: " << this->_name << std::endl;
	}
	return ;
}

void	Bureaucrat::signForm(Form &form)
{
	std::cout << this->_name << " trying to sign => " << form.getName() << "\n";
	try
	{	
		form.beSigned(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << this->_name << " couldn't sign => " << e.what() << '\n';
	}
}

void 	Bureaucrat::executeForm(Form const & form)
{
	if(form.getExecGrade() >= this->_grade)
	{
		std::cout << this->_name << " executed " << form.getName() << "\n";
		form.execute(*this);
	}
	if(form.getExecGrade() < this->_grade)
		throw Bureaucrat::GradeTooLowException();
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat: Grade too high");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat: Grade too low");
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat &a)
{
	o << "Bureaucrat: " << a.getName() << "\tGrade: " << a.getGrade() << std::endl;
	return (o);
}
