/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 18:02:47 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/10 18:19:30 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	setType("Cat");
	return ;
}

Cat::Cat(Cat const &copy)
{
	*this = copy;
	return ;
}

Cat::~Cat(void)
{
	return ;
}

void Cat::makeSound(void) const
{
	std::cout << "MIAOU MIAOU MIAOU !!!" << std::endl;
}

Cat	&Cat::operator=(Cat const &rhs)
{
	this->type = rhs.getType();
	return (*this);
}
