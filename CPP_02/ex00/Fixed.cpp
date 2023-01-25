/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 12:27:15 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/25 12:36:22 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(Fixed& original)
{
	*this = original;
	std::cout << "Copy contructor called\n";
}

Fixed::Fixed(void)
{
	this->_value = 0;
	std::cout << "Default constructor called\n";
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=(Fixed& rhs)
{
	std::cout << "Copy assignement operator called" << std::endl;;
	setRawBits(rhs.getRawBits());
	return (*this);
}

int	Fixed::getRawBits(void)
{
	std::cout << "getRawBits member called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}