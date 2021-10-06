/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 11:10:00 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/20 13:49:30 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Intern constructor called" << std::endl;
	this->_Tab[0] = "RobotomyRequestForm";
	this->_Tab[1] = "ShrubberyCreationForm";
	this->_Tab[2] = "PresidentialPardonForm";
	dispatch[0] = &Intern::createRobot;
	dispatch[1] = &Intern::createShrub;
	dispatch[2] = &Intern::createPresid;
	return ;
}

Intern::Intern(Intern const &copy)
{
	std::cout << "Intern copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Intern::~Intern(void)
{
	std::cout << "Intern destructor called" << std::endl;
	return ;
}

AForm		*Intern::createShrub(std::string target)
{
	AForm *shrub = new ShrubberyCreationForm(target);
	return (shrub);
}

AForm		*Intern::createRobot(std::string target)
{
	AForm *robot = new RobotomyRequestForm(target);
	return (robot);
}

AForm		*Intern::createPresid(std::string target)
{
	AForm *presid = new PresidentialPardonForm(target);
	return (presid);
}

AForm		*Intern::makeForm(std::string form_name, std::string target)
{
	int i = 0;
	while (i < 3)
	{
		if (form_name == this->_Tab[i])
		{
			std::cout << "Intern creates " << this->_Tab[i] << "." << std::endl;
			return (((*this).*dispatch[i])(target));
		}
		i++;
	}
	std::cout << "Intern can't create " << target << " because this type of form is unknown." << std::endl;
	return (0);
}

Intern		&Intern::operator=(Intern const &rhs)
{
	this->_Tab[0] = rhs._Tab[0];
	this->_Tab[1] = rhs._Tab[1];
	this->_Tab[2] = rhs._Tab[2];
	this->dispatch[0] = rhs.dispatch[0];
	this->dispatch[1] = rhs.dispatch[1];
	this->dispatch[2] = rhs.dispatch[2];
	return (*this);
}
