/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:03:10 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/26 13:03:35 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap
{
	protected:
			std::string	_name;
			int			_hp;
			int			_mana;
			int			_atk;
	public:
			ClapTrap(std::string name, int hp, int mana, int atk);
			ClapTrap(std::string name);
			ClapTrap(ClapTrap & first);
			ClapTrap();
			~ClapTrap();

			void	attack(const std::string& target);
			void	takeDamage(unsigned int amount);
			void	beRepaired(unsigned int amount);

			ClapTrap& operator=(ClapTrap& rhs);
};

#endif