/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 14:15:59 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/10 11:34:23 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

int	main(void)
{
	std::cout << "*** Creation of a ScavTrap:" << std::endl;
	ScavTrap john("John");
	std::cout << "\n*** Creation of a FragTrap:" << std::endl;
	FragTrap abigail("Abigail");
	std::cout << std::endl;
	john.getInfo();
	john.guardGate();
	std::cout << std::endl;
	abigail.getInfo();
	std::cout << "*** Frag Trap special function:" << std::endl;
	abigail.highFivesGuys();
	std::cout << std::endl;
	return (0);
}
