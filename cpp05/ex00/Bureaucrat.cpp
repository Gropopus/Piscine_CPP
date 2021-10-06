/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:23:52 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/16 14:50:04 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
	: _Grade(grade),  _Name(name)
{
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy)
{
	*this = copy;
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}

Bureaucrat		&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	this->_Grade = rhs.getGrade();
	return (*this);
}

std::ostream	&operator<<(std::ostream &ostream, Bureaucrat const &emp)
{
	ostream << emp.getName() << ", Bureaucrat grade " << emp.getGrade();
	return (ostream);
}

std::string		Bureaucrat::getName(void) const
{
	return (this->_Name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_Grade);
}

void			Bureaucrat::gradePlus(void)
{
	if (getGrade() < 150)
	{
		this->_Grade += 1;
		std::cout << getName() <<"'s grade has been lowered by 1." << std::endl;
	}
	else
		std::cout << "Your grade can't be lower than 150.\n You're such a useless employee" << std::endl;
}

void			Bureaucrat::gradeMinus(void)
{
	if (getGrade() > 1)
	{
		this->_Grade -= 1;
		std::cout << getName() <<"'s grade has been increased by 1, congratulation." << std::endl;
	}
	else
		std::cout << "Your grade can't go higher than 1.\n You're already the boss." << std::endl;
}

