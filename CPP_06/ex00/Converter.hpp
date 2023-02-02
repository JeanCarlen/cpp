/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:02:57 by jcarlen           #+#    #+#             */
/*   Updated: 2023/02/02 16:34:27 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
# include <fstream>
# include <limits>
# include <string>
# include <cfloat>

class Converter
{
public:
	Converter();
	Converter(const Converter& og);
	Converter& operator=(const Converter& rhs);
	Converter(std::string av);
	~Converter();
	void PrintValue(std::string av);
};

#endif