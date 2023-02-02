/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 14:33:37 by jeancarlen        #+#    #+#             */
/*   Updated: 2023/02/01 10:57:45 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{
	private:
			std::string _name;
			int	_grade;
	public:
			Bureaucrat();
			Bureaucrat(std::string const name, int grade);
			~Bureaucrat();
			Bureaucrat(Bureaucrat &og);
			Bureaucrat	&operator=(Bureaucrat const &rhs);
			
			const std::string	getName(void) const;
			int 	getGrade(void) const;
			void	incrementGrade(void);
			void	decrementGrade(void);

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

std::ostream	&operator<<(std::ostream &o, Bureaucrat &a);

#endif