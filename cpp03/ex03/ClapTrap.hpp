/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 14:16:31 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/10 15:05:51 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class	ClapTrap
{
	public:
		/* constructors destructor */
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &copy);
		~ClapTrap(void);

		virtual void			attack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		/* setter function */
		void			setName(std::string name);
		void			setDamage(unsigned int amount);
		void			setHP(unsigned int amount);
		void			setEP(unsigned int amount);
		/* Getters function */
		void			getInfo(void) const;
		std::string		getName(void) const;
		int				getDamage(void) const;
		int				getEP(void) const;
		int				getHP(void)const;
		/* Overlaod operator */
		ClapTrap &operator=(ClapTrap const &rhs);

	private:
		std::string		_Name;
		int				_Hitpoints;
		int				_Energy_points;
		int				_Attack_damage;
};


#endif
