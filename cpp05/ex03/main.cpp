/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 11:04:37 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/20 13:42:51 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

int		main(void)
{
	std::string		name;
	int				grade;
	std::cout << "**************************************************************" << std::endl;
	std::cout << "*                        AMAZINE.INC                         *" << std::endl;
	std::cout << "**************************************************************\n" << std::endl;
	std::cout << "RH: Remind me what grade are you ? (1 to 150)\n>";
	std::cin >> grade;
	if (std::cin.fail() || grade > 2147483647 || grade < -2147483648)
	{
		std::cin.clear();
		std::cout << "Invalid Input" <<std::endl;
		return (0);
	}
	std::string motivation;
	getline(std::cin, motivation);
	std::cout << "RH: Ok..., and your name?\n>";
	if (!getline(std::cin, name))
	{
		std::cin.clear();
		std::cout << "Invalid Input" <<std::endl;
		return (0);
	}
	try
	{
		if (grade < 1)
		{
			throw Bureaucrat::GradeTooHighException();
		}
		else if (grade > 150)
		{
			throw Bureaucrat::GradeTooLowException();
		}
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
		return (0);
	}
	Intern		slave;
	Bureaucrat	emp(name, grade);
	std::cout << "\n\n*** ShrubberyCreationForm ***" << std::endl;
	AForm	*firm;
	firm = slave.makeForm("ShrubberyCreationForm", "bob");
	std::cout << *firm << std::endl;
	emp.signForm(*firm);
	std::cout << "\n" << *firm ;
	firm->execute(emp);
	std::cout << "\n\n*** RobotomyRequestForm ***" << std::endl;
	AForm	*fire;
	fire = slave.makeForm("RobotomyRequestForm", "sylvie");
	std::cout << *fire << std::endl;
	emp.signForm(*fire);
	std::cout << "\n" << *fire;
	fire->execute(emp);
	std::cout << "\n\n*** PresidentialPardonForm ***" << std::endl;
	AForm	*pres;
	pres = slave.makeForm("PresidentialPardonForm", "jeff");
	std::cout << *pres << std::endl;
	emp.signForm(*pres);
	std::cout << "\n" << *pres;
	pres->execute(emp);
	std::cout << "\n\n" << "*** Unknown type ***" << std::endl;
	AForm *fake;
	fake = slave.makeForm("Fake", "nobody");
	std::cout << "\n\n" << std::endl;
	if (pres)
		delete pres;
	if (firm)
		delete firm;
	if (fire)
		delete fire;
	if (fake)
		delete fake;
	return (0);
}
