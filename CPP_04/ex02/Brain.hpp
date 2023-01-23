/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeancarlen <jeancarlen@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:20:52 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/20 12:44:45 by jeancarlen       ###   ########.fr       */
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
			void	setIdea(int i, std::string val);
			std::string getIdea(int i);
};

#endif