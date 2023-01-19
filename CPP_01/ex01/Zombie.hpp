/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:31:10 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/16 11:31:11 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>
# include <iomanip>

class Zombie
{
	private:
			std::string _name;
	public:
			Zombie(std::string name);
			Zombie();
			~Zombie();
			void	announce(void) const;
			void	set_name(std::string name);
};

Zombie* zombieHorde(int x, std::string name);

#endif