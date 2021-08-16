/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 14:35:49 by thsembel          #+#    #+#             */
/*   Updated: 2021/08/12 14:36:48 by thsembel         ###   ########.fr       */
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

	void annonce( void ) const;
	void give_name(std::string name);

	private:
		
		std::string _name;
};

Zombie*	newZombie( std::string name);
void	randomChump( std::string name );
#endif
