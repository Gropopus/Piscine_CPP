/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:33:21 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/15 12:04:59 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"
# include "IMateriaSource.hpp"

MateriaSource::MateriaSource()
{
	int	i = 0;

	std::cout << "MateriaSource Default constructor  called." << std::endl;
	while (i < 4)
	{
		this->source[i] = NULL;
		i++;
	}
	return ;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	std::cout << "MateriaSource Copy constructor called." << std::endl;
	*this = src;
	return ;
}

MateriaSource::~MateriaSource()
{
	int	i = 0;

	std::cout << "MateriaSource Destructor called." << std::endl;
	while (i < 4)
	{
		if (this->source[i])
			delete this->source[i];
		i++;
	}
	return ;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &rhs)
{
	int	i = 0;

	while (i < 4)
	{
		if (rhs.source[i])
			this->source[i] = rhs.source[i]->clone();
		else
			this->source[i] = NULL;
		i++;
	}
	return (*this);
}

void			MateriaSource::learnMateria(AMateria *materia)
{
	int	i = 0;

	if (!materia)
		return ;
	while (i < 4)
	{
		if (!this->source[i])
		{
			this->source[i] = materia->clone();
			break ;
		}
		i++;
	}
	if (i == 4)
		std::cout << "The MateriaSource is full" << std::endl;
	else
		std::cout << materia->getType() << " added to MasteriaSource at [ " << i << " ] position" << std::endl;
	return ;
}

AMateria		*MateriaSource::createMateria(std::string const &type)
{
	int	i = 0;

	while (i < 4)
	{
		if (this->source[i] && this->source[i]->getType() == type)
		{
			std::cout << "New " << type << " was created from your MateriaSource" << std::endl;
			return (this->source[i]->clone());
		}
		i++;
	}
	std::cout << "Type " << type << " not found in MateriaSource" << std::endl;
	return (0);
}
