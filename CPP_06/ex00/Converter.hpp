/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:02:57 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/25 16:17:31 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
# include <fstream>
# include <limits>
# include <string>

class Converter
{
	private:
			char	letter;
			int		num;
			float	flt;
			double	dbl;

	public:
			Converter();
			~Converter();
			Converter(Converter &og);
			Converter	&operator=(Converter const &rhs);

			int	Cint(int num);
			int Cchar(char letter);
			int	Cfloat(float flt);
			int Cdouble(double dbl);
};

std::ostream& operator<<( std::ostream& out, const Converter& rhs );

#endif