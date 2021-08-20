/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 14:15:59 by thsembel          #+#    #+#             */
/*   Updated: 2021/08/20 17:19:17 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap bob("Bob");
	ClapTrap jim("Jim");

	std::cout << std::endl;
	std::cout << bob.getName() << " took steroids, he's now doing 4 damages";
	std::cout << std::endl;
	bob.setDamage(4);
	bob.attack(jim.getName());
	jim.takeDamage(bob.getDamage());
	bob.attack(jim.getName());
	jim.takeDamage(bob.getDamage());
	bob.getInfo();
	jim.getInfo();
	std::cout << jim.getName() << " Drink a potion." << std::endl;
	jim.beRepaired(4);
	bob.getInfo();
	jim.getInfo();
	std::cout << jim.getName() << " took an axe he's now doing 12 damages.";
	std::cout << std::endl;
	jim.setDamage(12);
	jim.attack(bob.getName());
	bob.takeDamage(jim.getDamage());
	bob.getInfo();
	jim.getInfo();
	return (0);
}
