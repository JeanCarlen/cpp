#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
			int					_value;
			static const int	_bits = 8;
	public:
			Fixed(Fixed const& original);
			Fixed(const int num);
			Fixed(const float flt);
			Fixed();
			~Fixed();
			int		getRawBits()const;
			void	setRawBits(int const raw);
			float	toFloat() const;
			int		toInt() const;

			Fixed&	operator=(Fixed const& rhs);
			// > < >= <= == != //
			int operator>( Fixed const & rhs) const;
			int operator<( Fixed const & rhs) const;
			int operator>=( Fixed const & rhs) const;
			int operator<=( Fixed const & rhs) const;
			int operator==( Fixed const & rhs) const;
			int operator!=( Fixed const & rhs) const;
			
			// + - * / //
			Fixed operator+( Fixed const & rhs) const;
			Fixed operator-( Fixed const & rhs) const;
			Fixed operator*( Fixed const & rhs) const;
			Fixed operator/( Fixed const & rhs) const;

			// ++F F++ --F F-- //
			Fixed & operator++( void );
			Fixed & operator--( void );
			Fixed operator++( int n );
			Fixed operator--( int n );

			// min & max //
			static Fixed & min(Fixed & a, Fixed & b );
			static Fixed & max(Fixed & a, Fixed & b );
			static const Fixed & min(const Fixed & a, const Fixed & b );
			static const Fixed & max(const Fixed & a, const Fixed & b );


};

std::ostream& operator<<(std::ostream& o, Fixed const& rhs);

#endif