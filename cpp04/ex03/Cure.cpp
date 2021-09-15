/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:24:37 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/15 11:11:34 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cure.hpp"

Cure::Cure(void)
{
	std::cout << "Cure constructor called" << std::endl;
	this->type = "cure";
	return ;
}

Cure::Cure(Cure const &copy)
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor called" << std::endl;
	return ;
}

Cure &Cure::operator=(Cure const &rhs)
{
	(void)rhs;
	return (*this);
}

AMateria	*Cure::clone() const
{
	return (new Cure());
}

void		Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << " *" << std::endl;
	return ;
}
