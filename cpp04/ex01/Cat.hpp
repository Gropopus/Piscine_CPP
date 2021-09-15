/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 17:59:01 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/14 15:13:20 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const &copy);
		~Cat(void);
		void virtual	makeSound(void) const;
		void			Learn(std::string newtricks[100]);
		void			Inception(void);
		Cat &operator=(Cat const &rhs);
	private:
		Brain *_Brain;
};

#endif
