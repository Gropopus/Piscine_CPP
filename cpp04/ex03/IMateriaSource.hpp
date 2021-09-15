/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:28:43 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/14 18:31:02 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef IMateriaSource_HPP
# define IMateriaSource_HPP
# include <iostream>
# include "AMateria.hpp"

class	IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif
