/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 11:23:28 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/08 11:36:28 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

/**************** Constructors and Destructor **********************/

Fixed::Fixed(void)
{
	_fixed_value = 0;
	return ;
}

Fixed::Fixed(Fixed const &copy)
{
	*this = copy;
	return ;
}

Fixed::Fixed(const int nb)
{
    this->_fixed_value = nb * (1 << this->_fract_nb);
	// 1 << bits == 2^bits
	return ;
}

Fixed::Fixed(const float nb)
{
    this->_fixed_value = roundf(nb * (1 << this->_fract_nb));
	// rounded  to closest int
	return ;
}

Fixed::~Fixed()
{
	return ;
}

/************* Overloads (Member Functions) **************/

Fixed		&Fixed::operator=(Fixed const &rhs)
{
	this->_fixed_value = rhs.getRawBits();
	return (*this);
}

Fixed Fixed::operator*(Fixed const & rhs) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(Fixed const & rhs) const
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed Fixed::operator+(Fixed const & rhs) const
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator-(Fixed const & rhs) const
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed & Fixed::operator++(void)
{
	this->_fixed_value++;
	return (*this);
}

Fixed & Fixed::operator--(void)
{
	this->_fixed_value--;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed copy = *this;
	++*this;
	return (copy);
}

Fixed Fixed::operator--(int)
{
	Fixed copy = *this;
	--*this;
	return (copy);
}

bool Fixed::operator<(Fixed const & rhs)
{
	return (this->_fixed_value < rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const & rhs) {

    return (this->_fixed_value <= rhs.getRawBits());
}

bool Fixed::operator>(Fixed const & rhs) {

    return (this->_fixed_value > rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const & rhs) {

    return (this->_fixed_value >= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const & rhs) {

    return (this->_fixed_value == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const & rhs) {

    return (this->_fixed_value != rhs.getRawBits());
}
/************* Overloads (Non member functions) ***********/

std::ostream	&operator<<(std::ostream &output, Fixed const &rhs)
{
	output << rhs.toFloat();
	return (output);
}

/****************** Member functions *********************/

int		Fixed::getRawBits(void) const
{
	return (this->_fixed_value);
}

void	Fixed::setRawBits(int const raw)
{
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

Fixed & Fixed::min(Fixed & rh, Fixed & rhs)
{
	return (rh.toFloat() < rhs.toFloat() ? rh : rhs);
}

Fixed & Fixed::max(Fixed & rh, Fixed & rhs)
{
	return (rh.toFloat() > rhs.toFloat() ? rh : rhs);
}

Fixed const & Fixed::min(Fixed const & rh, Fixed const & rhs)
{
	std::cout << "min member function for const called" << std::endl;
	return (rh.toFloat() < rhs.toFloat() ? rh : rhs);
}

Fixed const & Fixed::max(Fixed const & rh, Fixed const & rhs)
{
	std::cout << "max member function for const called" << std::endl;
	 return (rh.toFloat() > rhs.toFloat() ? rh : rhs);
}
