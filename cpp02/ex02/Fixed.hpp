/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 11:37:04 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/08 11:39:32 by thsembel         ###   ########.fr       */
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
		Fixed &operator++();
		Fixed &operator--();
		Fixed operator++(int);
		Fixed operator--(int);
		Fixed operator*(Fixed const & rhs) const;
		Fixed operator/(Fixed const & rhs) const;
		Fixed operator+(Fixed const & rhs) const;
		Fixed operator-(Fixed const & rhs) const;
		bool operator<(Fixed const & rhs);
		bool operator<=(Fixed const & rhs);
		bool operator>(Fixed const & rhs);
		bool operator>=(Fixed const & rhs);
		bool operator==(Fixed const & rhs);
		bool operator!=(Fixed const & rhs);

//----------- Member functions ---------//

		int		getRawBits(void) const;
		int		toInt(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		static Fixed & min(Fixed & rh, Fixed & rhs);
		static Fixed & max(Fixed & rh, Fixed & rhs);
		static Fixed const & min(Fixed const & rh, Fixed const & rhs);
		static Fixed const & max(Fixed const & rh, Fixed const & rhs);

	private:
		int _fixed_value;
		int static const _fract_nb = 8;
};

//--- Overloads (Non member function) ---//
std::ostream		&operator<<(std::ostream &output, Fixed const &rhs);
#endif
