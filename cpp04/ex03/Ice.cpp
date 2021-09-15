/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:15:41 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/15 11:09:32 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp"

Ice::Ice()
{
	std::cout << "Ice constructor called" << std::endl;
	this->type = "ice";
	return ;
}

Ice::Ice(Ice const &copy)
{
	std::cout << "Ice copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor called" << std::endl;
	return ;
}

Ice	&Ice::operator=(Ice const &rhs)
{
	(void)rhs;
	return (*this);
}

AMateria	*Ice::clone() const
{
	return (new Ice());
}

void		Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}
