/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:02:57 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/25 16:37:49 by jcarlen          ###   ########.ch       */
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
			int		Cint();
			char 	Cchar();
			float	Cfloat();
			double 	Cdouble();

	public:
			Converter();
			~Converter();
			Converter(const std::string& value);
			Converter(Converter &og);
			Converter	&operator=(Converter const &rhs);

			void Convert();

};

std::ostream& operator<<( std::ostream& out, const Converter& rhs );

#endif