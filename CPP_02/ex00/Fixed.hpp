/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 12:27:10 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/25 12:29:38 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
			int					_value;
			static const int	_bits = 8;
	public:
			Fixed(Fixed& original);
			Fixed();
			~Fixed();
			Fixed&	operator=(Fixed& rhs);
			int		getRawBits();
			void	setRawBits(int const raw);

};

#endif