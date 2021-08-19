/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 11:22:58 by thsembel          #+#    #+#             */
/*   Updated: 2021/08/19 14:41:12 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const &copy);
		~Fixed();
		Fixed &operator=(Fixed const &rhs);
		int	getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		int _fixed_value;
		int static const _fract_nb;
};
#endif
