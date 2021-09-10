/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 12:03:45 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/10 16:35:21 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

/************** Constructors and Destructor ***************/
DiamondTrap::DiamondTrap(std::string name) 
	: ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	std::cout << "DiamondTrap constructor called" << std::endl;
	this->_Name = name;
	FragTrap::setHP();
	FragTrap::setDamage();
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const & copy, std::string name)
	: ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	*this = copy;
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
	return ;
}
/****************** Member functions *********************/

std::string	DiamondTrap::getName(void)
{
	return (this->_Name);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My Diamond class name is " << getName() << std::endl;
	std::cout << "My ClapTrap name is " << ClapTrap::getName() << std::endl;
}
/************************ Overload *************************/

DiamondTrap		&DiamondTrap::operator=(DiamondTrap const &rhs)
{
	this->FragTrap::setDamage();
	this->FragTrap::setHP();
	this->setEP(rhs.getEP());
	this->ClapTrap::setName(rhs.ClapTrap::getName());
	this->_Name = rhs._Name;
	return (*this);
}
