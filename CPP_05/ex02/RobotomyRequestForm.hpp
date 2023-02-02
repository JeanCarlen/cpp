/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:00:08 by jeancarlen        #+#    #+#             */
/*   Updated: 2023/01/31 14:55:16 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class Bureaucrat;

class RobotomyRequestForm : public Form
{
	private:
			std::string	_target;
	public:
			RobotomyRequestForm(std::string target);
			RobotomyRequestForm(RobotomyRequestForm &og);
			~RobotomyRequestForm();

			RobotomyRequestForm& operator=( const RobotomyRequestForm& rhs );

			std::string	getTarget() const;

			void	execute(Bureaucrat const &executor) const;
};


#endif