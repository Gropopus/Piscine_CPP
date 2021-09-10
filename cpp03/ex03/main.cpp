/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 14:15:59 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/10 15:45:36 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap pearl("Pearl");
	std::cout << "\nDiamond Name:\t" << pearl.getName() << std::endl;
	pearl.getInfo();
	std::cout << "\n*** DiamondTrap pearl using ScavTrap attack function:" << std::endl;
	pearl.attack("Steven");
	std::cout << "\n*** DiamondTrap pearl using ScavTrap special and FragTrap special functions:" << std::endl;
	pearl.guardGate();
	pearl.highFivesGuys();
	std::cout << "\n*** DiamondTrap special function:" << std::endl;
	pearl.whoAmI();
	std::cout << std::endl;
	return (0);
}
