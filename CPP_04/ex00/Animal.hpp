/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:51:36 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/19 14:06:00 by jcarlen          ###   ########.ch       */
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
};

#endif