/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <thsembel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 14:33:42 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/17 17:19:56 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: AForm("ShrubberyCreationForm", 145, 137), _Target(target)
{
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy)
	: AForm(copy)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	*this = copy;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
	return ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	this->_Target = rhs.getTarget();
	return (*this);
}

std::string			ShrubberyCreationForm::getTarget(void) const
{
	return (this->_Target);
}

void				ShrubberyCreationForm::setTarget(std::string target)
{
	this->_Target = target;
}

void				ShrubberyCreationForm::execute(Bureaucrat &emp) const
{
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		content;

	if (this->isExecutable(emp) == false)
	{
		std::cout << emp.getName() << " can't execute this form because his grade is " << emp.getGrade() << ".\n";
		std::cout << this->getSgrade() << " grade minimum is required to sign and " << this->getEgrade() << " grade minimum is required to execute" << std::endl;
		return ;
	}
	infile.open("tree");
	if (infile.fail())
	{
		std::cout << "Error: File cannot be opened." << std::endl;
		return ;
	}
	outfile.open((this->getTarget() + "_shrubbery").c_str());
	if (outfile.fail())
	{
		std::cout << "Error: File_shrubbery cannot be created" << std::endl;
		return ;
	}
	while (getline(infile, content))
	{
		outfile << content;
		outfile << std::endl;
		content.clear();
	}
	std::cout << "shrubbery file created" << std::endl;
}
