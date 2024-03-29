/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 12:59:50 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/25 14:19:05 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"


class Form;

class Intern
{
	public:
			Intern(Intern & og);
			Intern();
			~Intern();
			Intern	&operator=(Intern const &rhs);
			
			Form* makeForm(std::string form, std::string target);

};


#endif