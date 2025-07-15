#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &src);
		Fixed&	operator=(Fixed const &rSym);
		Fixed(const int n);
		Fixed(const float f);

		int		getRawBits() const;
		void	setRawBits(int const raw);
		float	toFloat() const;
		int		toInt() const;

	private:
		int					value;
		static const int	bits = 8;
};

std::ostream&	operator<<(std::ostream& o, Fixed const &rSym);

#endif