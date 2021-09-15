/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:48:35 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/15 10:47:44 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"
# include "Character.hpp"
# include "ICharacter.hpp"

Character::Character()
{
	int	i = 0;

	std::cout << "Character Default constructor called." << std::endl;
	this->name = "unset";
	while (i < 4)
	{
		this->inventory[i] = NULL;
		i++;
	}
	return ;
}

Character::Character(std::string name)
{
	int	i = 0;

	std::cout << "Character constructor called." << std::endl;
	this->name = name;
	while (i < 4)
	{
		this->inventory[i] = NULL;
		i++;
	}
	return ;
}

Character::Character(Character const &copy)
{
	std::cout << "Character Copy constructor called." << std::endl;
	*this = copy;
	return ;
}

Character::~Character()
{
	std::cout << "Character Destructor called." << std::endl;
	return ;
}

Character	&Character::operator=(Character const &rhs)
{
	int	i = 0;

	this->name = rhs.getName() + "_copy";
	while (i < 4)
	{
		if (rhs.inventory[i])
			this->inventory[i] = rhs.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
		i++;
	}
	return (*this);
}

void		Character::equip(AMateria *materia)
{
	int	i = 0;
	if (!materia)
		return ;
	while (i < 4)
	{
		if (!this->inventory[i])
		{
			this->inventory[i] = materia;
			break ;
		}
		i++;
	}
	if (i == 4)
		std::cout << this->getName() << " inventory is full" << std::endl;
	else
		std::cout << *materia << " added to " << this->getName() << " inventory at index [ " << i << " ]" << std::endl;
	return ;
}

void		Character::unequip(int index)
{
	if (index < 0 || index >= 4)
		return ;
	if (!this->inventory[index])
		std::cout << this->name << " has no Materia assigned at index " << "[ " << index << " ]" << std::endl;
	else
	{
		std::cout << this->name << "' s " << this->inventory[index]->getType() << " was removed from index [" << index << "]" << std::endl;
		this->inventory[index] = NULL;
	}
	return ;
}

void		Character::use(int index, ICharacter& target)
{
	if (index < 0 || index >= 4)
		return ;
	std::cout << "{" << this->name << "} ";
	if (this->inventory[index])
	{
		this->inventory[index]->use(target);
		delete this->inventory[index];
		this->inventory[index] = NULL;
	}
	else
		std::cout << "no Materia assigned at index [ " << index << " ]" << std::endl;
	return ;
}

std::string const	&Character::getName() const
{
	return (this->name);
}
