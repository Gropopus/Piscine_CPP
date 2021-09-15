/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 18:02:47 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/14 16:52:13 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Dog Constructor called" << std::endl;
	setType("Dog");
	_Brain = new Brain();
	return ;
}

Dog::Dog(Dog const &copy)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	this->_Brain = NULL;
	*this = copy;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor called" << std::endl;
	delete _Brain;
	return ;
}

void Dog::makeSound(void) const
{
	std::cout << "WOUAF WOUAF WOAF !!!" << std::endl;
}

void		Dog::Learn(std::string newtricks[100])
{
	std::cout << "The Dog has learned and stocked new tricks in his brain." << std::endl;
	this->_Brain->setIdea(newtricks);
	return ;
}

void		Dog::Inception(void)
{
	int i = 0;
	std::string *Ideas;
	Ideas =  _Brain->getIdea();
	while (i < 100)
	{
		if (Ideas[i][0])
			std::cout << Ideas[i] << std::endl;
		i++;
	}
}

Dog	&Dog::operator=(Dog const &rhs)
{
	this->type = rhs.getType();
	if (this->_Brain)
		delete this->_Brain;
	this->_Brain = new Brain(*rhs._Brain);
	return (*this);
}
