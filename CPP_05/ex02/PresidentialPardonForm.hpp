/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeancarlen <jeancarlen@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:00:03 by jeancarlen        #+#    #+#             */
/*   Updated: 2023/01/24 14:13:15 by jeancarlen       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form
{
	private:
			std::string	_target;
	public:
			PresidentialPardonForm(std::string target);
			PresidentialPardonForm(PresidentialPardonForm &og);
			~PresidentialPardonForm();

			PresidentialPardonForm& operator=( const PresidentialPardonForm& rhs );

			std::string	getTarget() const;

			void	execute(Bureaucrat &executor) const;
};


#endif