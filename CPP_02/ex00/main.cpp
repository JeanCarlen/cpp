#include <iostream>
#include "Fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed b( a );
	Fixed c;

	c.setRawBits(42);
	std::cout << "a: " << a.getRawBits() << std::endl;
	std::cout << "b: " << b.getRawBits() << std::endl;
	std::cout << "c: " << c.getRawBits() << std::endl;

	return 0;
}