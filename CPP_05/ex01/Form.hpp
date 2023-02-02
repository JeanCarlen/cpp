/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:21:05 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/31 14:13:03 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

# include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
	private:
			const std::string _name;
			bool		_decision;
			const int	_signe;
			const int	_exec;
			

	public:
			Form(std::string const name, int signe, int exec);
			~Form();
			Form(Form &og);
			Form	&operator=(Form const &rhs);
			
			std::string getName() const;
			bool		getSigned() const;
			int getSigneGrade() const;
			int getExecGrade() const;
			void	beSigned(Bureaucrat &signer);

			class GradeTooHighException : public std::exception
			{
				public:
				virtual const char* what() const throw();
			};

			class GradeTooLowException : public std::exception
			{
				public:
				virtual const char* what() const throw();
			};

};

std::ostream	&operator<<(std::ostream &o,  Form &a);

#endif