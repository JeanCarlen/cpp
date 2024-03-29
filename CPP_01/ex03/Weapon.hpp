/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:14:34 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/16 12:14:35 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
	private:
		std::string	_type;

	public:
		Weapon(std::string type);
		Weapon();
		~Weapon();
		std::string	const & getType() const;
		void	setType(std::string new_type);
};

#endif