/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 14:46:57 by thsembel          #+#    #+#             */
/*   Updated: 2021/08/11 16:18:53 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int		main(void)
{
	Zombie michel("Titi");
	Zombie *toto = newZombie("Toto");
	michel.annonce();
	toto->annonce();
	randomChump("Tutu");
	delete toto;
	return (0);
}
