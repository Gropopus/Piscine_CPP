/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 14:15:20 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/01 17:42:39 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _Name(name), _Hitpoints(10),
	_Energy_points(10), _Attack_damage(0)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void			ClapTrap::setDamage(unsigned int amount)
{
	this->_Attack_damage = amount;
}

int				ClapTrap::getDamage(void) const
{
	return this->_Attack_damage;
}

int				ClapTrap::getEP(void) const
{
	return this->_Energy_points;
}

int				ClapTrap::getHP(void) const
{
	return (this->_Hitpoints);
}
std::string		ClapTrap::getName(void) const
{
	return (this->_Name);
}

void	ClapTrap::getInfo(void) const
{
	std::cout << "name:\t\t" << _Name << std::endl;
	std::cout << "Hit points:\t" << _Hitpoints << std::endl;
	std::cout << "Energy points:\t" << _Energy_points << std::endl;
	std::cout << "Attack damage:\t" << _Attack_damage << std::endl;
	std::cout << std::endl;
}

void	ClapTrap::attack(std::string const & target)
{
		if (_Hitpoints <= 0)
		{
			std::cout << _Name << " doesn't have enough Hit points to attack." << std::endl;
		}
		std::cout << "ClapTrap " << _Name << " attack " << target;
		std::cout << " causing " << _Attack_damage << " points of damage!" << std::endl;
		_Hitpoints -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _Name << " took " << amount;
	std::cout << " points of damage!" << std::endl;
	_Energy_points -= amount;
	if (_Energy_points <= 0)
		std::cout << "ClapTrap " << _Name << " just died!" << std::endl;
	if (_Energy_points < 0)
		_Energy_points = 0;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << _Name << " has regained " << amount;
	std::cout << " Energy points back and " << amount << " hit points back";
	std::cout << std::endl;
	this->_Energy_points += amount;
	if (_Energy_points > 10)
		_Energy_points = 10;
	this->_Hitpoints += amount;
	if (_Hitpoints > 10)
		_Hitpoints = 10;
}
