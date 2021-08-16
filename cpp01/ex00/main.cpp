/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 14:46:57 by thsembel          #+#    #+#             */
/*   Updated: 2021/08/12 11:24:48 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int		main(void)
{
	Zombie tata;
	tata.give_name("tata");
	Zombie *toto = newZombie("Toto");
	tata.annonce();
	toto->annonce();
	randomChump("Tutu");
	delete toto;
	return (0);
}
