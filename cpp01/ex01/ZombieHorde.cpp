/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 16:27:38 by thsembel          #+#    #+#             */
/*   Updated: 2021/08/11 18:04:51 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int i = 0;
	Zombie *horde = new Zombie[N];
	while (i < N)
	{
		if (i == 0)
			horde[i].give_name("First");
		else if (i % 2 == 0)
			horde[i].give_name("Tutu");
		else
			horde[i].give_name(name);
		horde[i].annonce();
		i++;
	}
	return (horde);
}
