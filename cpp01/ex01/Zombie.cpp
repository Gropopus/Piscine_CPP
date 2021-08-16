/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 14:35:55 by thsembel          #+#    #+#             */
/*   Updated: 2021/08/12 14:37:51 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie( void )
{
	return ;
}

Zombie::~Zombie( void )
{
	std::cout << this->_name << " has been destroyed" << std::endl;
}

void Zombie::annonce( void ) const
{
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
};

void Zombie::give_name( std::string name )
{
		this->_name = name;
};

Zombie* newZombie( std::string name )
{
	Zombie*	newZombie	= new Zombie();
	newZombie->give_name(name);
	return (newZombie);
};

void	randomChump( std::string name )
{
	Zombie *zombie = newZombie(name);
	zombie->annonce();
	delete zombie;
}
