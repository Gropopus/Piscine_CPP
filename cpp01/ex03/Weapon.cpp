/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 11:47:24 by thsembel          #+#    #+#             */
/*   Updated: 2021/08/16 15:00:05 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon(std::string name) : _type(name)
{
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

void			Weapon::setType(std::string type)
{
	this->_type = type;
}

std::string		const &Weapon::getType(void) const
{
	return this->_type;
}
