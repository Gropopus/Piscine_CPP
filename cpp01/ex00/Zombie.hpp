/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 14:35:49 by thsembel          #+#    #+#             */
/*   Updated: 2021/08/11 16:25:30 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie(void);

	void annonce( void )
	{
		std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
	};
	private:
		
		std::string _name;
};

Zombie*	newZombie( std::string name);
void	randomChump( std::string name );
#endif
