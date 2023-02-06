/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:02:57 by jcarlen           #+#    #+#             */
/*   Updated: 2023/02/03 11:477:16 by marvin        ###   ########.fr       */
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
private:
	std::string _value;
public:
	Converter();
	Converter(const Converter& og);
	Converter& operator=(const Converter& rhs);
	Converter(std::string av);
	~Converter();
	void	PrintValue();
	void	castChar();
	void	castInt();
	void	castFloat();
	void	castDouble();
};

#endif