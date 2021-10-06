/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 11:04:37 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/17 13:20:09 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"

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
		std::cout << "RH: Ok ok ok...Well " << name << " if you want to get paid you need to give me the form b52 signed by your Manager" << std::endl;
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
		return (0);
	}
	Bureaucrat employee(name, grade);
	std::cout << std::endl;
	std::cout << "You: hello sir, can you sign this for me please?" << std::endl;
	Form b52("b52", 100, 50);
	std::cout << b52 << std::endl;
	std::cout << "Manager: You don't need me for that, sign it yourself and don't waste my time again!" << std::endl;
	employee.signForm(b52);
	if (b52.getSigned())
	{
		std::cout << std::endl;
		employee.gradeMinus();
	}
	std::cout << "\n" << b52 << std::endl;
	std::cout << "Manager: Hey you ! I need you to create the wtf42 form, execution below grade 20 and do it ASAP !\n" << std::endl;
	int Sgrade;
	try
	{
		std::cout << "Type the Grade to sign:\n>";
		std::cin >> Sgrade;
		if (std::cin.fail() || Sgrade > 2147483647 || Sgrade < -2147483648)
		{
			std::cin.clear();
			std::cout << "Invalid Input" <<std::endl;
			return (0);
		}
		if (Sgrade > 150)
			throw Form::GradeTooLowException();
		else if (Sgrade < 1)
			throw Form::GradeTooHighException();
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
		return (0);
	}
	Form wtf42("wtf42", Sgrade, 20);
	std::cout << wtf42 << std::endl;
	return (0);
}
