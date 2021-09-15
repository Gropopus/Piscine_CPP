/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 17:57:29 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/15 11:10:19 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"

/******************** Constructors & Destructor ************/

AMateria::AMateria(void)
{
	std::cout << "AMateria default constructor called" << std::endl;
	this->type = "none";
	return ;
}


AMateria::AMateria(AMateria const &copy)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = copy;
	return ;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor called" << std::endl;
	return ;
}

/*********************** Overload ***********************/

AMateria	&AMateria::operator=(AMateria const &rhs)
{
	(void)rhs;
	return (*this);
}

std::ostream	&operator<<(std::ostream &ostrm, AMateria const &materia)
{
	ostrm << materia.getType();
	return (ostrm);
}

/******************* Member Functions ********************/

std::string const	&AMateria::getType(void) const
{
	return (this->type);
}


void	AMateria::use(ICharacter &target)
{
	if (this->type == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (this->type == "cure")
		std::cout << "* heals " << target.getName() << "'s wonds *" << std::endl;
	return ;
}
