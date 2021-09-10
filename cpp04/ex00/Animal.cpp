/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 17:35:10 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/10 18:16:31 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal(void) : type("Animal")
{
	return ;
}

Animal::Animal(Animal const &copy)
{
	*this = copy;
	return ;
}

Animal::~Animal(void)
{
	return ;
}

std::string Animal::getType(void) const
{
	return (this->type);
}

void	Animal::setType(std::string new_type)
{
	this->type = new_type;
}

void Animal::makeSound(void) const
{
	std::cout << "Weird animal sound" << std::endl;
}

Animal	&Animal::operator=(Animal const &rhs)
{
	this->type = rhs.getType();
	return (*this);
}
