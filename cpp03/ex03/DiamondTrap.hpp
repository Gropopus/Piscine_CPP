/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 12:02:00 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/10 16:35:17 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : virtual public ClapTrap, public FragTrap, public ScavTrap
{
	public:
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const & copy, std::string name);
		~DiamondTrap(void);
		std::string	getName(void);
		void		whoAmI(void);
		DiamondTrap &operator=(DiamondTrap const &rhs);
	private:
		std::string _Name;
};

#endif
