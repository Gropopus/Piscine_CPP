/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 14:16:31 by thsembel          #+#    #+#             */
/*   Updated: 2021/08/20 17:21:14 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class	ClapTrap
{
	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &copy);
		~ClapTrap(void);
		void			attack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		/* setter function */
		void			setDamage(unsigned int amount);
		/* Getters function	*/
		void			getInfo(void) const;
		std::string		getName(void) const;
		int				getDamage(void) const;
		int				getEP(void) const;
		int				getHP(void)const;

	private:
		std::string		_Name;
		int				_Hitpoints;
		int				_Energy_points;
		int				_Attack_damage;
};


#endif
