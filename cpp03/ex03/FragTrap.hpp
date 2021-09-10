/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 17:47:51 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/10 16:02:10 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(std::string name);
		FragTrap(FragTrap const &copy, std::string name);
		~FragTrap(void);
	void setHP(void);
	void setDamage(void);
	void highFivesGuys(void) const;
	FragTrap &operator=(FragTrap const &rhs);
	private:
};

#endif
