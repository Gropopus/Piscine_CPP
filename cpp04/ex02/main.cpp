/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 17:23:03 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/14 16:56:41 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AAnimal.hpp"
# include "Brain.hpp"
# include "Dog.hpp"
# include "Cat.hpp"

int main(void)
{
	std::cout << "*** test with dog:" << std::endl;
	AAnimal *dog = new Dog();
	std::cout << "\n*** dog makeSound():" << std::endl;
	dog->makeSound();
	std::cout << "\n*** dog destruction:" << std::endl;
	delete dog;

	std::cout << "\n\n*** test with cat:" << std::endl;
	AAnimal *cat = new Cat();
	std::cout << "\n*** cat makeSound():" << std::endl;
	cat->makeSound();
	std::cout << "\n*** cat destruction:" << std::endl;
	delete cat;
/*	This is not working....*/
/*	std::cout << "\n*** test with animal:" << std::endl;
	AAnimal *animal = new AAnimal();
	animal->makeSound();*/
	return (0);
}
