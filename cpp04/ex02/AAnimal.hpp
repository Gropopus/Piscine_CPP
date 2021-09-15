/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 17:25:03 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/14 16:40:47 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class AAnimal
{
	public:
		AAnimal(void);
		AAnimal(AAnimal const &copy);
		virtual ~AAnimal(void);
		void virtual	makeSound(void) const = 0;
		void			setType(std::string new_type);
		std::string		getType(void) const;
		AAnimal &operator=(AAnimal const &rhs);
	protected:
		std::string type;
	private:
};

#endif
