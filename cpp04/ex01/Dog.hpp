/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 17:59:01 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/14 16:06:22 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(Dog const &copy);
		~Dog(void);
		void virtual	makeSound(void) const;
		void			Learn(std::string newtricks[100]);
		void			Inception(void);
		Dog &operator=(Dog const &rhs);
	private:
		Brain *_Brain;
};

#endif
