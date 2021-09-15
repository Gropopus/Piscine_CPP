/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 17:07:42 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/15 11:12:01 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iomanip>
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string			type;
	public:
		AMateria();
		AMateria(AMateria const &src);
		virtual ~AMateria();
		AMateria &operator=(AMateria const &rhs);

		std::string const   &getType() const;
		virtual AMateria    *clone() const = 0;
		virtual void        use(ICharacter &target);
};

std::ostream	&operator<<(std::ostream &ostrm, AMateria const &materia);
#endif
