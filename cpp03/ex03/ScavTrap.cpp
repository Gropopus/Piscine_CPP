/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 17:45:38 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/10 15:52:34 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

/**************** Constructors destructor *******************/

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	setDamage(20);
	setHP(100);
	setEP(50);
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &copy, std::string name) : ClapTrap(name)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
	return ;
}
/*********************** Overload ***************************/

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
	this->setDamage(rhs.getDamage());
	this->setHP(rhs.getHP());
	this->setEP(rhs.getEP());
	this->setName(rhs.getName());
	return (*this);
}

/********************* Member Fucntion ***********************/

void	ScavTrap::guardGate(void) const
{
	std::cout << "ScavTrap " << getName() << " have enterred in Gate keeper mode"<< std::endl;
}

void	ScavTrap::attack(std::string const & target)
{
		if (getHP() <= 0)
		{
			std::cout << getName() << " doesn't have enough Hit points to attack." << std::endl;
		}
		std::cout << "ScavTrap " << getName() << " attack " << target;
		std::cout << " causing " << getDamage() << " points of damage!" << std::endl;
		setHP(getHP() - 1);
}
