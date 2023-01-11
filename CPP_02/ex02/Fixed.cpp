#include "Fixed.hpp"


Fixed::Fixed(Fixed const& original)
{
	*this = original;
	std::cout << "copy contructor called\n";
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
	std::cout << "default constuctor called\n";
}

Fixed::~Fixed(void)
{
	std::cout << "destuctor called\n";
}

Fixed& Fixed::operator=(Fixed const& rhs)
{
	setRawBits(rhs.getRawBits());
	std::cout << "copy assignement operator called\n";
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

// > < >= <= == != //

int Fixed::operator>( Fixed const & rhs) const
{
	if (this->getRawBits() > rhs.getRawBits())
		return (1);
	return (0);
}

int Fixed::operator<( Fixed const & rhs) const
{
	if (this->getRawBits() < rhs.getRawBits())
		return (1);
	return (0);
}

int Fixed::operator>=( Fixed const & rhs) const
{
	if (this->getRawBits() >= rhs.getRawBits())
		return (1);
	return (0);
}

int Fixed::operator<=( Fixed const & rhs) const
{
	if (this->getRawBits() <= rhs.getRawBits())
		return (1);
	return (0);
}

int Fixed::operator==( Fixed const & rhs) const
{
	if (this->getRawBits() == rhs.getRawBits())
		return (1);
	return (0);
}

int Fixed::operator!=( Fixed const & rhs) const
{
	if (this->getRawBits() != rhs.getRawBits())
		return (1);
	return (0);
}

// + - * / //

Fixed Fixed::operator+( Fixed const & rhs) const
{
	Fixed ret(this->toFloat() + rhs.toFloat());
	
	return (ret);
}

Fixed Fixed::operator-( Fixed const & rhs) const
{
	Fixed ret(this->toFloat() - rhs.toFloat());
	
	return (ret);
}

Fixed Fixed::operator*( Fixed const & rhs) const
{
	Fixed ret(this->toFloat() * rhs.toFloat());

	return (ret);
}

Fixed Fixed::operator/( Fixed const & rhs) const
{
	Fixed ret(this->toFloat() / rhs.toFloat());
	
	return (ret);
}

// Prefix (++F --F) //

Fixed & Fixed::operator++() 
{
	this->_value += 1;
	return (*this);
}

Fixed & Fixed::operator--()
{
	this->_value -= 1;
	return (*this);
}

// Postfix (F++ F--) //

Fixed Fixed::operator++(int) 
{
	Fixed	temp = *this;

	(this->_value) +=1 ;
	return (temp);
}

Fixed Fixed::operator--(int)
{
	Fixed	temp = *this;

	(this->_value) -=1 ;
	return (temp);
}

// min & max //

const Fixed & Fixed::min(const Fixed & a, const Fixed & b)
{
	if (a < b)
		return (a);
	return (b);
}
	
const Fixed & Fixed::max(const Fixed & a, const Fixed & b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed & Fixed::min(Fixed & a, Fixed & b)
{
	if (a < b)
		return (a);
	return (b);
}
	
Fixed & Fixed::max(Fixed & a, Fixed & b)
{
	if (a > b)
		return (a);
	return (b);
}