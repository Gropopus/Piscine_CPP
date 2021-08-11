/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 14:35:55 by thsembel          #+#    #+#             */
/*   Updated: 2021/08/11 16:21:11 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " has been destroyed" << std::endl;
}

Zombie* newZombie( std::string name )
{
	Zombie*	newZombie	= new Zombie(name);
	return (newZombie);
}

void randomChump( std::string name )
{
	Zombie *zombie = newZombie(name);
	zombie->annonce();
	delete zombie;
}
