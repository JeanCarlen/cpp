/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:53:01 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/20 12:46:3 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
	private:
			Brain*	_brain;
	public:
			Cat(Cat &og);
			Cat();
			~Cat();
			Cat &operator=(Cat &rhs);
			void makeSound() const;
			void	setIdea(int i, std::string val);
			std::string	getIdea(int i);
};

#endif