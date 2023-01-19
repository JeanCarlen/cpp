/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:31:17 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/16 11:31:21 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */


Zombie* zombieHorde( int x, std::string name )
{
	Zombie	*horde = new Zombie[x];
	for (int i = 0; i < x; i++)
	{
		horde[i].set_name(name + " " + std::to_string(i + 1));
	}
	return (horde);
}