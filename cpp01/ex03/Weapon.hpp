/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 11:36:09 by thsembel          #+#    #+#             */
/*   Updated: 2021/08/16 14:59:35 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class	Weapon
{
	public:

		Weapon(std::string name);
		~Weapon(void);
		void		setType(std::string name);
		std::string	const &getType(void) const;

	private:
		std::string _type;
};

#endif
