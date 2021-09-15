/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:24:51 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/14 15:19:12 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Constructor called" << std::endl;
	return ;
}

Brain::Brain(Brain const &copy)
{
	*this = copy;
	return ;
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructor called" << std::endl;
	return ;
}

void	Brain::setIdea(std::string idea[100])
{
	int i = 0;

	while (i < 100)
	{
		this->_Ideas[i] = idea[i];
		i++;
	}
}

std::string		*Brain::getIdea(void)
{
	return (this->_Ideas);
}

Brain &Brain::operator=(Brain const &rhs)
{
	int i = 0;
	while (i < 100)
	{
		this->_Ideas[i] = rhs._Ideas[i];
		i++;
	}
	return (*this);
}
