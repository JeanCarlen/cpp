/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 12:29:59 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/25 12:29:59 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
			int					_value;
			static const int	_bits = 8;
	public:
			Fixed(Fixed const& original);
			Fixed(const int num);
			Fixed(const float flt);
			Fixed();
			~Fixed();
			Fixed&	operator=(Fixed const& rhs);
			int		getRawBits()const;
			void	setRawBits(int const raw);
			float	toFloat() const;
			int		toInt() const;

};

std::ostream& operator<<(std::ostream& o, Fixed const& rhs);

#endif