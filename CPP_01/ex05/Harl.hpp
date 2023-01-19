/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:19:09 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/16 13:04:03 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void); 
		void	error(void);
	public:
		Harl();
		~Harl();

		void	complain(std::string level);
};

typedef void (Harl::*t_func) ( void );

#endif
