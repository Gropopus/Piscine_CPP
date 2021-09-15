/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:33:36 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/14 11:22:16 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("Animal")
{
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
	*this = copy;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
	return ;
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::setType(std::string new_type)
{
	this->type = new_type;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "Fake animal sound" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &rhs)
{
	this->type = rhs.getType();
	return (*this);
}
