/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeancarlen <jeancarlen@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:53:55 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/20 13:34:33 by jeancarlen       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
	private:
			Brain*	_brain;
	public:
			Dog(Dog &og);
			Dog();
			~Dog();
			Dog &operator=(Dog &rhs);
			void makeSound() const;
			void	setIdea(int i, std::string val);
			std::string	getIdea(int i);
};

#endif