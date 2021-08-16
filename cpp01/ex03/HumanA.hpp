/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 11:22:47 by thsembel          #+#    #+#             */
/*   Updated: 2021/08/16 15:08:52 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"
# include <iostream>

class	HumanA
{
	public:
		HumanA(std::string given_name, Weapon &given_weapon);
		~HumanA(void);
		void		attack(void);

		Weapon		&weapon;
		std::string	name;
};

#endif
