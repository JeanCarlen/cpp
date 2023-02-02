/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:00:16 by jeancarlen        #+#    #+#             */
/*   Updated: 2023/01/31 14:55:22 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

class Bureaucrat;

class ShrubberyCreationForm : public Form
{
	private:
			std::string	_target;
			static const std::string		_tree;
	public:
			ShrubberyCreationForm(std::string target);
			ShrubberyCreationForm(ShrubberyCreationForm &og);
			~ShrubberyCreationForm();

			ShrubberyCreationForm& operator=( const ShrubberyCreationForm& rhs );

			std::string	getTarget() const;

			void	execute(Bureaucrat const &executor) const;
};


#endif
