/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:20:52 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/15 11:12:04 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CURE_HPP
# define CURE_HPP
# include <iostream>
# include "AMateria.hpp"
# include "Character.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure const &src);
		~Cure();

		Cure			&operator=(Cure const &rhs);
		AMateria	*clone() const;
		void		use(ICharacter &target);
};

# endif
