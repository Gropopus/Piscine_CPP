/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 17:35:10 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/14 16:44:04 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AAnimal.hpp"

AAnimal::AAnimal(void) : type("Animal")
{
	return ;
}

AAnimal::AAnimal(AAnimal const &copy)
{
	*this = copy;
	return ;
}

AAnimal::~AAnimal(void)
{
	std::cout<< "Animal Destructor called" << std::endl;
	return ;
}

std::string AAnimal::getType(void) const
{
	return (this->type);
}

void	AAnimal::setType(std::string new_type)
{
	this->type = new_type;
}

void AAnimal::makeSound(void) const
{
	std::cout << "Weird animal sound" << std::endl;
}

AAnimal	&AAnimal::operator=(AAnimal const &rhs)
{
	this->type = rhs.getType();
	return (*this);
}
