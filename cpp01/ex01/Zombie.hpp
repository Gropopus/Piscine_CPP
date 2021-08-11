/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 14:35:49 by thsembel          #+#    #+#             */
/*   Updated: 2021/08/11 17:39:39 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
	public:
		Zombie(void);
		~Zombie(void);

	void annonce( void )
	{
		std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
	};
	void give_name(std::string name)
	{
		this->_name = name;
	};
	Zombie* newZombie( std::string name )
	{
		Zombie*	newZombie	= new Zombie();
		newZombie->_name = name;
		return (newZombie);
	};
	private:
		std::string _name;
};

Zombie*	newZombie( std::string name);
Zombie*	zombieHorde( int N, std::string name );
void	randomChump( std::string name );
#endif
