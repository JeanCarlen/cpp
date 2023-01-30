/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:08:53 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/30 15:12:40 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>
#include <cstdlib>

int main() 
{

	Base *type = NULL; 
	type = type->generate();

	type->identify(type);
	type->identify(*type);

	delete type;
}