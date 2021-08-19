/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 11:22:58 by thsembel          #+#    #+#             */
/*   Updated: 2021/08/19 15:33:59 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
	public:
//--------- Constructors and destructor--//
		Fixed(void);
		Fixed(Fixed const &copy);
		Fixed(const int nb);
		Fixed(const float nb);
		~Fixed();
//----------- Overloads -----------------//
		Fixed &operator=(Fixed const &rhs);
//----------- Member functions ---------//
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int _fixed_value;
		int static const _fract_nb;
};

std::ostream		&operator<<(std::ostream &output, Fixed const &rhs);
#endif
