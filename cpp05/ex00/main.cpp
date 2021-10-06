/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 11:04:37 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/16 14:58:49 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

int		main(void)
{
	std::string		name;
	int				grade;
	std::cout << "**************************************************************" << std::endl;
	std::cout << "*                        AMAZINE.INC                         *" << std::endl;
	std::cout << "**************************************************************\n" << std::endl;
	std::cout << "RH: For a position of what grade do you want to apply? (1 to 150)\n>";
	std::cin >> grade;
	if (std::cin.fail() || grade > 2147483647 || grade < -2147483648)
	{
		std::cin.clear();
		std::cout << "Invalid Input" <<std::endl;
		return (0);
	}
	std::string motivation;
	getline(std::cin, motivation);
	std::cout << "RH: Ok..., what's your name?\n>";
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
		std::cout << "RH: Ok ok ok...Well welcome to Amazine " << name << ". Now GET TO WORK !!!" << std::endl;
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
		return (0);
	}
	Bureaucrat employee(name, grade);
	std::cout << "\n" << std::endl;
	std::string task;
	while (1)
	{
		std::cout << "* Type an option:\n- [ REG ] -> Regular 35 hours week" << std::endl;
		std::cout <<"- [ BIG ] -> Work a 44 hours week (paid 35...)" << std::endl;
		std::cout << "- [ VAC ] -> Ask for a vacation week\n>";
		getline(std::cin, task);
		if (task == "REG" || task == "BIG" || task == "VAC")
		{
			std::cout << std::endl;
			break ;
		}
	}
	try
	{
		if (task == "REG")
		{
			std::cout << "*** Meeting with: " << employee.getName() << " ,Grade: " << employee.getGrade() << " ***" << std::endl;
			std::cout << "Manager: OK " << employee.getName();
			std::cout << " let's be Clear..WE exept MUCH better work from OUR employee!" << std::endl;
			if (employee.getGrade() + 1 > 150)
				throw Bureaucrat::GradeTooLowException();
			employee.gradePlus();
			std::cout << "\n*** -"<< employee.getName() << " -Grade: " << employee.getGrade() << " ***" << std::endl;
		}
		else if (task == "BIG")
		{
			std::cout << "*** Meeting with: " << employee.getName() << " ,Grade: " << employee.getGrade() << " ***"<< std::endl;
			std::cout << "Manager: OK " << employee.getName() << " Good job !" << std::endl;
			std::cout << "RH: Did you know that EU law allow you to work up to 48 hours a week?" << std::endl;
			if (employee.getGrade() - 1 < 1)
				throw Bureaucrat::GradeTooHighException();
			employee.gradeMinus();
			std::cout << "\n*** -"<< employee.getName() << " -Grade: " << employee.getGrade() << " ***" << std::endl;
		}
		else if (task == "VAC")
		{
			std::cout << "*** Meeting with: " << employee.getName() << " ,Grade: " << employee.getGrade() << " ***" << std::endl;
			std::cout << "Manager: NO WAY !!! NOW back to work, we got CLIENTS waiting for their package !" << std::endl;
			if (employee.getGrade() + 10 > 150)
				throw Bureaucrat::GradeTooHighException();
			int i = 0;
			while (i < 10)
			{
				employee.gradePlus();
				i++;
			}
			std::cout << "\n*** -"<< employee.getName() << " -Grade: " << employee.getGrade() << " ***" << std::endl;
		}
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
		return (0);
	}
	return (0);
}
