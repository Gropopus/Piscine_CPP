/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 18:02:47 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/14 16:22:44 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"
# include "Brain.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << "Cat Constructor called" << std::endl;
	setType("Cat");
	_Brain = new Brain();
	return ;
}

Cat::Cat(Cat const &copy)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	this->_Brain = NULL;
	*this = copy;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor called" << std::endl;
	delete _Brain;
	return ;
}

void Cat::makeSound(void) const
{
	std::cout << "MIAOU MIAOU MIAOU !!!" << std::endl;
}

void		Cat::Learn(std::string newtricks[100])
{
	std::cout << "The Cat has learned and stocked new tricks in his brain." << std::endl;
	this->_Brain->setIdea(newtricks);
	return ;
}

void		Cat::Inception(void)
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

Cat	&Cat::operator=(Cat const &rhs)
{
	this->type = rhs.getType();
	if (this->_Brain)
		delete this->_Brain;
	this->_Brain = new Brain(*rhs._Brain);
	return (*this);
}
