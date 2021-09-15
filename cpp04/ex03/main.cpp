/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 17:04:45 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/15 13:27:05 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"
# include "Ice.hpp"
# include "Cure.hpp"
# include "Character.hpp"
# include "ICharacter.hpp"
# include "IMateriaSource.hpp"
# include "MateriaSource.hpp"

int main()
{
	std::cout << "*** Creating MateriaSource:" << std::endl;
	IMateriaSource* src = new MateriaSource();
	std::cout <<  "\n*** Learning Ice & Cure materia in MateriaSource:" << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	std::cout << "\n*** Creating a new Character:" << std::endl;
	ICharacter* Cloud = new Character("Cloud");
	AMateria* tmp;
	AMateria* tmp2;
	std::cout << "\n*** Creating Ice and Cure materia from MateriaSource and adding it to Cloud's Inventory:" << std::endl;
	tmp = src->createMateria("ice");
	Cloud->equip(tmp);
	tmp = src->createMateria("cure");
	tmp2 = src->createMateria("cure");
	Cloud->equip(tmp);
	std::cout << "\n*** Creating a new Character:" <<std::endl;
	ICharacter* Tifa = new Character("Tifa");
	std::cout << "\n*** Exemple of Characters using Materias:" << std::endl;
	Cloud->use(0, *Tifa);
	Cloud->use(1, *Tifa);
	Tifa->use(0, *Cloud);
	std::cout << "\nAssigning Materia to tifa:" << std::endl;
	Tifa->equip(src->createMateria("ice"));
	Tifa->equip(tmp2);
	std::cout << std::endl;
	std::cout << "\n*** Unequiping Cure from Tifa:" << std::endl;
	Tifa->unequip(1);
	std::cout << "\n*** Putting Cure Materia back and using it: (prove that Unequiping doesn't suppress it)" << std::endl;
	Tifa->equip(tmp2);
	Tifa->use(1, *Tifa);
	std::cout << "\n*** Making the MateriaSource full:" << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	std::cout << "\n*** Creating an unknown type materia:" << std::endl;
	AMateria *fake;
	fake = src->createMateria("fake");
	std::cout << "\n*** Deleting Characters and MateriaSource:" << std::endl;
	delete Tifa;
	delete Cloud;
	delete src;
	return (0);
}
