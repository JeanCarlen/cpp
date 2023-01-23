/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeancarlen <jeancarlen@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:51:36 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/20 12:48:05 by jeancarlen       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	protected:
				std::string	_type;
	public:
			Animal(std::string type = "Animal");
			Animal(Animal const &og);
			virtual ~Animal();
			Animal& operator=(Animal const &rhs);
			std::string getType() const;
			virtual void makeSound() const;
			virtual void setIdea(int i, std::string val) = 0;
			virtual std::string	getIdea(int i) = 0;
};

#endif