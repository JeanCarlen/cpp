/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarlen <jcarlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 12:29:52 by jcarlen           #+#    #+#             */
/*   Updated: 2023/01/25 12:29:52 by jcarlen          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed(Fixed const& original)
{
	*this = original;
	std::cout << "copy constructor called\n";
}

Fixed::Fixed(const int integer)
{
	this->setRawBits(integer << this->_bits);
	std::cout << "int constructor called\n";
}

Fixed::Fixed(const float flo)
{
	this->setRawBits((int)roundf(flo * (1 << this->_bits)));
	std::cout << "float constructor called\n";
}

Fixed::Fixed(void)
{
	this->_value = 0;
	std::cout << "default constructor called\n";
}

Fixed::~Fixed(void)
{
	std::cout << "destructor called\n";
}

Fixed& Fixed::operator=(Fixed const& rhs)
{
	std::cout << "copy assignement operator called\n";
	setRawBits(rhs.getRawBits());
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float	Fixed::toFloat(void) const
{
	float	f;

	f = (float)this->getRawBits() / (1 << this->_bits);
	return (f);
}

int	Fixed::toInt(void) const
{
	return (this->getRawBits() >> this->_bits);
}

std::ostream& operator<<(std::ostream& o, Fixed const& rhs)
{
	o << rhs.toFloat();
	return (o);
}