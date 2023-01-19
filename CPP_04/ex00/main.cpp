/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:03:33 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/19 14:05:56 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;

	std::cout << "---WrongAnimal---\n";
	const WrongAnimal *bird = new WrongAnimal();
	const WrongCat	*b = new WrongCat();
	std::cout << bird->get_type() << std::endl;
	std::cout << b->get_type() << std::endl;
	bird->makeSound();
	b->makeSound();
	delete bird;
	delete b;
	return (0);
}