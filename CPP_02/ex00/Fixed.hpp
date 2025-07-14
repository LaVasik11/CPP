#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed 
{
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &src);
		Fixed&	operator=(Fixed const &rSym);
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int					value;
		static const int	bits = 8;
};

#endif