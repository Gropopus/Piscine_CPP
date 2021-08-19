/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 11:23:28 by thsembel          #+#    #+#             */
/*   Updated: 2021/08/19 15:54:50 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

int const Fixed::_fract_nb = 8;

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	_fixed_value = 0;
	return ;
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor called" << std::endl;
    this->_fixed_value = nb * (1 << this->_fract_nb);
	// 1 << bits == 2^bits
	return ;
}

Fixed::Fixed(const float nb)
{
	std::cout << "Float constructor called" << std::endl;
    this->_fixed_value = roundf(nb * (1 << this->_fract_nb));
	// rounded  to closest int
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}
/*************		Overloads		********************/

Fixed		&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fixed_value = rhs.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &output, Fixed const &rhs)
{
	output << rhs.toFloat();
	return output;
}

/****************** Member functions *********************/

int		Fixed::getRawBits(void) const
{
//	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed_value = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)(this->_fixed_value) / (1 << this->_fract_nb));
}

int		Fixed::toInt(void) const
{
	return (this->_fixed_value / (1 << this->_fract_nb));
}

