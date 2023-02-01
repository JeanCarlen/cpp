/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:41:04 by fmalizia          #+#    #+#             */
/*   Updated: 2023/02/01 16:52:47 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include<iostream>

template<typename T>
void	iter(T *arr, int size, void (*f)(T &))
{
	for	(int i=0; i < size; i++)
	{
		f(arr[i]);
	}
}


template <typename T>
void	print( T &i )
{
	std::cout << i << std::endl;
}

template<typename T>
void	add(T &i)
{
	std::cout << i + 10 << std::endl;
}

#endif