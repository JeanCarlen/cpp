#include <iostream>
#include "Fixed.hpp"

int main( void ) 
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "1: " << a << std::endl;
	std::cout << "2: "<< ++a << std::endl;
	std::cout << "3: "<< a << std::endl;
	std::cout << "4: "<< a++ << std::endl;
	std::cout << "5: "<< a << std::endl;
	std::cout << "6: "<< b << std::endl;
	std::cout << "7: "<< Fixed::max( a, b ) << std::endl;

	std::cout << "\n-------------------------\n\n" << std::endl;

	Fixed const c( Fixed(100) * Fixed(2));
	Fixed const d( Fixed(100) / Fixed(2));
	std::cout << "1: "<< c + d << std::endl;
	std::cout << "2: "<< c - d << std::endl;
	std::cout << "3: "<< Fixed::min( c, d ) << std::endl;

	return 0;
}