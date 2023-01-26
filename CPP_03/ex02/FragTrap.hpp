/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:03:16 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/26 13:03:17 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
# define FragTrap_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
			FragTrap(FragTrap const& first);
			FragTrap(std::string name);
			FragTrap();
			~FragTrap();

			void	attack(const std::string& target);
			void	highFivesGuys(void);
};

#endif