/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <thsembel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 15:51:25 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/17 17:20:17 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _Target(target)
{
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) : AForm(copy)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	*this = copy;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
	return ;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	this->_Target = rhs.getTarget();
	return (*this);
}

std::string		RobotomyRequestForm::getTarget() const
{
	return (this->_Target);
}

void			RobotomyRequestForm::setTarget(std::string target)
{
	this->_Target = target;
	return ;
}

void		RobotomyRequestForm::execute(Bureaucrat &emp) const
{
	if (this->isExecutable(emp) == false)
	{
		std::cout << emp.getName() << " can't execute this form because his grade is " << emp.getGrade() << ".\n";
		std::cout << this->getSgrade() << " grade minimum is required to sign and " << this->getEgrade() << " grade minimum is required to execute" << std::endl;
		return ;
	}
	std::srand(time(0));
	if (rand() % 2)
		std::cout << "Biiiiiiiiizzzz Biiiiiiiiiiiiiiiizzzz !\n" << this->_Target << " has been robotomized." << std::endl;
	else
		std::cout << this->_Target << " has not been robotomized." << std::endl;
	return ;
}
