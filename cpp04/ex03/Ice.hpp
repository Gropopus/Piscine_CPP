/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:13:07 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/14 19:18:14 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ICE_HPP
# define ICE_HPP
# include <iostream>
# include "AMateria.hpp"
# include "Character.hpp"


class Ice : public AMateria
{
	public:
		Ice();
		Ice(Ice const &src);
		~Ice();

		Ice			&operator=(Ice const &rhs);

		AMateria	*clone() const;
		void		use(ICharacter &target);
};

#endif
