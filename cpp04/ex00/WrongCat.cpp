/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:42:35 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/14 11:22:53 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	setType("WrongCat");
	return ;
}

WrongCat::WrongCat(WrongCat const &copy)
{
	*this = copy;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout<< "WrongCat Destructor called" << std::endl;
	return ;
}

void WrongCat::makeSound(void) const
{
	std::cout << "MIAOU MIAOU MIAOU !!!" << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &rhs)
{
	this->type = rhs.getType();
	return (*this);
}
