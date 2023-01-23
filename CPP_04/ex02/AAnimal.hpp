/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeancarlen <jeancarlen@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:51:36 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/20 13:32:43 by jeancarlen       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
# define AAnimal_HPP

# include <iostream>
# include <string>

class AAnimal
{
	protected:
				std::string	_type;
	public:
			AAnimal(std::string type = "AAnimal");
			AAnimal(AAnimal const &og);
			virtual ~AAnimal();
			AAnimal& operator=(AAnimal const &rhs);
			std::string getType() const;
			virtual void makeSound() const = 0;
			virtual void setIdea(int i, std::string val) = 0;
			virtual std::string	getIdea(int i) = 0;
};

#endif