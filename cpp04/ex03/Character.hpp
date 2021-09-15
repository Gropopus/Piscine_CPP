/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:43:50 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/14 19:13:59 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
	protected:
		std::string	name;
		AMateria	*inventory[4];
	public:
		Character();
		Character(std::string name);
		Character(Character const &src);
		~Character();

		Character &operator=(Character const &rhs);
	
		std::string const	&getName() const;
		void	equip(AMateria *m);
		void 	unequip(int index);
		void 	use(int index, ICharacter& target);
};

#endif
