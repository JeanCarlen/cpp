/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:20:52 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/19 15:12:57 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	private:
			std::string	_ideas[100];
			std::string _type;
	public:
			Brain();
			Brain(Brain const &og);
			~Brain();
			Brain& operator=(Brain const &rhs);
};

#endif