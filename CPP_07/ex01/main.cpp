/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:46:32 by fmalizia          #+#    #+#             */
/*   Updated: 2023/02/01 17:28:06 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

#define N 5

class test
{
	public:
			template <typename T>
			void	prant(T &i)
			{
				std::cout << "test 1\n";
				std::cout << i << std::endl;
			};
};

int main( void )
{
	test *a = new test;
	void(test::*func)(int);
	func = &test::prant;

	int arr1[] = { 1, 2, 3, 4, 5 };

	std::cout << "arr1: " << std::endl;
	iter(arr1, N, func);

	double arr2[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };

	std::cout << "\narr2: " << std::endl;
	iter(arr2, N, &print);

	char arr3[] = { 'a', 'b', 'c', 'd', 'e' };

	std::cout << "\narr3: " << std::endl;
	iter(arr3, N, &print);

	std::string arr4[] = { "one", "two", "three", "four", "five" };

	std::cout << "\narr4: " << std::endl;
	iter(arr4, N, &print);

	std::cout << "---------ADD---------\n\n" << std::endl;


	std::cout << "arr1: " << std::endl;
	iter(arr1, N, &add);

	std::cout << "\narr2: " << std::endl;
	iter(arr2, N, &add);

	std::cout << "\narr3: " << std::endl;
	iter(arr3, N, &add);

	return 0;
}