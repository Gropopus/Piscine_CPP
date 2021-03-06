/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 14:15:59 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/10 11:10:34 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "*** Creation of a ScavTrap:" << std::endl;
	ScavTrap john("John");
	std::cout << "\n*** Creation of a ClapTrap:" << std::endl;
	ClapTrap bob("Bob");
	std::cout << std::endl;
	john.getInfo();
	std::cout << std::endl;
	bob.getInfo();
	std::cout << std::endl;
	std::cout << "*** ScavTrap special function:" << std::endl;
	john.guardGate();
	std::cout << "\n*** ClapTrap attack:" << std::endl;
	bob.attack(john.getName());
	std::cout << "\n*** ScavTrap own attack function" << std::endl;
	john.attack(bob.getName());
	std::cout << "\n*** destruction of a ClapTrap then a ScavTrap" << std::endl;
	return (0);
}
