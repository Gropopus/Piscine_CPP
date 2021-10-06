/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <thsembel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 16:19:12 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/17 17:20:27 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std:: string target)
	: AForm("PresidentialPardonForm", 25, 5), _Target(target)
{
	std::cout << "PresidentialPardonForm constructor called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy)
	: AForm(copy)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	*this = copy;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
	return ;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	this->_Target = rhs.getTarget();
	return (*this);
}

void			PresidentialPardonForm::setTarget(std::string target)
{
	this->_Target = target;
	return ;
}

std::string		PresidentialPardonForm::getTarget() const
{
	return (this->_Target);
}

void		PresidentialPardonForm::execute(Bureaucrat &emp) const
{
	if (this->isExecutable(emp) == true)
		std::cout << this->_Target << " has been pardonned by Zafod Beeblebrox." << std::endl;
	else
	{
		std::cout << emp.getName() << " can't execute this form because his grade is " << emp.getGrade() << ".\n";
		std::cout << this->getSgrade() << " grade minimum is required to sign and " << this->getEgrade() << " grade minimum is required to execute" << std::endl;
	}
	return ;
}
