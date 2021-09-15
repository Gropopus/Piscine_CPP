/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:31:34 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/14 18:42:31 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include <iostream>
#include "IMateriaSource.hpp"


class MateriaSource : public IMateriaSource
{
	protected:
		AMateria	*source[4];
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &copy);
		~MateriaSource();

		MateriaSource &operator=(MateriaSource const &rhs);
		
		void		learnMateria(AMateria *materia);
		AMateria*	createMateria(std::string const &type);
};

#endif
