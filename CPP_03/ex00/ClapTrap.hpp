/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:04:37 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/26 13:04:39 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap
{
	private:
			std::string	_name;
			int			_hp;
			int			_mana;
			int			_atk;
	public:
			ClapTrap(std::string name);
			ClapTrap(ClapTrap& first);
			ClapTrap();
			~ClapTrap();

			void	attack(const std::string& target);
			void	takeDamage(unsigned int amount);
			void	beRepaired(unsigned int amount);

			ClapTrap& operator=(ClapTrap& rhs);
};

#endif