/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:35:58 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/14 11:21:31 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &copy);
		virtual ~WrongAnimal(void);
		void			makeSound(void) const;
		void			setType(std::string new_type);
		std::string		getType(void) const;
		WrongAnimal &operator=(WrongAnimal const &rhs);
	protected:
		std::string type;
	private:
};

#endif
