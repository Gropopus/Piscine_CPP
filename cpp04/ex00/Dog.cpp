/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 18:02:47 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/14 10:55:28 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	setType("Dog");
	return ;
}

Dog::Dog(Dog const &copy)
{
	*this = copy;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor called" << std::endl;
	return ;
}

void Dog::makeSound(void) const
{
	std::cout << "WOUAF WOUAF WOAF !!!" << std::endl;
}

Dog	&Dog::operator=(Dog const &rhs)
{
	this->type = rhs.getType();
	return (*this);
}
