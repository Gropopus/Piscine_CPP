/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 17:45:38 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/10 11:31:28 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	setDamage(30);
	setHP(100);
	setEP(100);
	return ;
}

FragTrap::FragTrap(FragTrap const &copy, std::string name) : ClapTrap(name)
{
	*this = copy;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
	return ;
}

void	FragTrap::highFivesGuys(void)const
{
	std::cout << "FragTrap " << getName() << " says High Fives Guys !"<< std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
	this->setDamage(rhs.getDamage());
	this->setEP(rhs.getEP());
	this->setHP(rhs.getHP());
	this->setName(rhs.getName());
	return (*this);
}
