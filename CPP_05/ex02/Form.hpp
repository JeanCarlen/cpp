/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeancarlen <jeancarlen@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:21:05 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/24 14:25:35 by jeancarlen       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <cstdlib>

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
			virtual ~Form();
			Form(Form &og);
			Form	&operator=(Form const &rhs);
			
			std::string getName() const;
			bool		getSigned() const;
			int getSigneGrade() const;
			int getExecGrade() const;

			void	beSigned(Bureaucrat &signer);
			virtual void	execute(Bureaucrat &executor) const = 0;

			class NotSignedException : public std::exception
			{
				public:
					virtual const char* what() const throw();
			};

};

std::ostream	&operator<<(std::ostream &o,  Form &a);

#endif