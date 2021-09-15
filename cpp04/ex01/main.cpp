/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 17:23:03 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/14 16:27:19 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.hpp"
# include "WrongCat.hpp"
# include "Animal.hpp"
# include "Brain.hpp"
# include "Dog.hpp"
# include "Cat.hpp"

int main(void)
{
	Animal *tab[8];
	int i = 0;

	std::cout << "*** Creation of the objects in the array:" << std::endl;
	while (i < 8)
	{
		if (i < 4)
			tab[i] = new Dog;
		else
			tab[i] = new Cat;
		i++;
	}
	std::cout << "\n\n*** Content in the array:" << std::endl;
	i = 0;
	while (i < 8)
	{
		std::cout << tab[i]->getType() << std::endl;
		i++;
	}
	std::cout << "\n\n *** Destruction of the array:" << std::endl;
	i = 0;
	while (i < 8)
	{
		delete tab[i];
		i++;
	}
	std::cout << "\n*** Creating a cat:" << std::endl;
	Cat cat;
	std::cout << "\n*** Lets use Constructor by copy to duplicate our cat:" << std::endl;
	Cat copy(cat);
	std::cout << "Copy:\t" << copy.getType() << std::endl;
	std::cout << "Cat:\t" << cat.getType() << std::endl;
	std::cout << "\n*** Lets transform our copy cat into a poney:" << std::endl;
	copy.setType("Poney");
	std::cout << "Copy:\t" << copy.getType() << std::endl;
	std::string tricks[100];
	tricks[0] = "High five";
	tricks[1] = "poop on the toilet";
	tricks[2] = "do a wink";
	std::cout << "\n*** Now lets learne the cat 3 tricks, High five, Poop on the toilet";
	std::cout << " and do a wink, unsing his learn() function:" << std::endl;
	cat.Learn(tricks);
	std::cout << "\n*** lets check if the cat has tricks in his brain unsing Inception() function:\n";
	cat.Inception();
	std::cout << "\n*** Destruction of the cat object and it's copy." << std::endl;
	return (0);
}
