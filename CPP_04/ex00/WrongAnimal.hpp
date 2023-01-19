/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:58:24 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/19 14:05:54 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal 
{
	protected:
		std::string	_type;

	public:
		WrongAnimal(std::string type = "Wrong");
		WrongAnimal( WrongAnimal const & src );
		virtual ~WrongAnimal( void );

		WrongAnimal	&operator=( WrongAnimal const & src );

		void		set_type( std::string const value );

		std::string	get_type( void ) const;

		virtual void makeSound() const;

};

#endif