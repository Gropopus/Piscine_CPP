/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 17:25:03 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/10 18:13:41 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
	public:
		Animal(void);
		Animal(Animal const &copy);
		~Animal(void);
		void virtual	makeSound(void) const;
		void			setType(std::string new_type);
		std::string		getType(void) const;
		Animal &operator=(Animal const &rhs);
	protected:
		std::string type;
	private:
};

#endif
