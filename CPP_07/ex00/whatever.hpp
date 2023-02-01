/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:09:31 by fmalizia          #+#    #+#             */
/*   Updated: 2023/02/01 16:52:46 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template<typename T>
void	swap(T &a, T &b)
{
		T temp = a;
		a = b;
		b = temp;
}

template<typename T>
T	min(T &a, T &b)
{
	if (a < b)
		return (a);
	return (b);
}

template<typename T>
T	max(T &a, T &b)
{
	if (a > b)
		return (a);
	return (b);
}

#endif