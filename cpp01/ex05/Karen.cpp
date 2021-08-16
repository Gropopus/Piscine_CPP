/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 18:21:22 by thsembel          #+#    #+#             */
/*   Updated: 2021/08/16 19:08:11 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Karen.hpp"

Karen::Karen(void)
{
	this->_level = "DEBBUG";
	return ;
}

Karen::~Karen(void)
{
	return ;
}

void	Karen::complain(std ::string level)
{
	
}

void	Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger.\n";
	std::cout <<"I just love it!" << std::endl;
	std::cout << std::endl;
	info();
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money.\n";
	std::cout << "You don’t put enough!\n";
	std::cout << "If you did I would not have to ask for it!" << std::endl;
	std::cout << std::endl;
	warning();
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free.\n";
	std::cout << "I’ve been coming here for years and you just started working here last month." << std::endl;
	std::cout << std::endl;
	error();
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}
