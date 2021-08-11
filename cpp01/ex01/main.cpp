/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 14:46:57 by thsembel          #+#    #+#             */
/*   Updated: 2021/08/11 18:04:49 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int		main(void)
{
	Zombie *horde = zombieHorde(5, "Pierre");

	std::cout << std::endl;
	horde->annonce();
	std::cout << std::endl;
	delete [] horde;
	return (0);
}
