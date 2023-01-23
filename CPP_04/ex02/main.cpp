/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:03:33 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/20 12:42:45:15 by marvin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int	main(void)
{
	Cat*	djoy = new Cat();
	Dog*	mayo = new Dog();

	djoy->setIdea(0, "first string");
	djoy->setIdea(1, "second string");
	mayo->setIdea(0, "first mayo string");
	mayo->setIdea(1, "second mayo string");

	Dog* macy = new Dog(*mayo);
	std::cout << "djoy: " << djoy->getIdea(0) << std::endl;
	std::cout << "djoy: " << djoy->getIdea(1) << std::endl;
	djoy->makeSound();
	std::cout << "mayo: " << mayo->getIdea(0) << std::endl;
	std::cout << "mayo: " << mayo->getIdea(1) << std::endl;
	mayo->makeSound();
	std::cout << "macy: " << macy->getIdea(0) << std::endl;
	std::cout << "macy: " << macy->getIdea(1) << std::endl;
	macy->makeSound();
	delete djoy;
	delete mayo;
	delete macy;
	return (0);
}