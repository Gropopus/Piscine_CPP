/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 17:23:03 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/14 11:23:21 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"
# include "Dog.hpp"
# include "Cat.hpp"

int main(void)
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << "*** getType() used for Animal j->Dog:" <<std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << "*** getType() used for Animal i->Cat:" <<std::endl;
		std::cout << i->getType() << " " << std::endl;
		std::cout << "*** j(Dog) using makeSound():" <<std::endl;
		j->makeSound(); //will output the cat sound!
		std::cout << "*** i(Cat) using makeSound():" <<std::endl;
		i->makeSound();
		std::cout << "*** meta(Animal) using makeSound():" <<std::endl;
		meta->makeSound();
		std::cout << "\nDestruction:" << std::endl;
		delete j;
		delete i;
		delete meta;
	}
	{
		std::cout << "\n\nWrongAnimal & WrongCat class tests:\n" << std::endl;
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();
		std::cout << "*** getType() used for WongAnimal i->WrongCat:" <<std::endl;
		std::cout << i->getType() << " " << std::endl;
		std::cout << "*** i(WrongCat) using makeSound():" <<std::endl;
		i->makeSound();
		std::cout << "*** meta(WrongAnimal) using makeSound():" <<std::endl;
		meta->makeSound();
		std::cout << "\nDestruction:" << std::endl;
		delete meta;
		delete i;
	}
	return (0);
}
