/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:30:44 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/16 11:30:45 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int i = 0;

	Zombie* horde;
	horde = zombieHorde(5, "need braiiiinzzzzzz!");
	for (i = 0; i < 5; i++)
		horde[i].announce();
	delete[] (horde);
}