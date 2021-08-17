/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 18:21:22 by thsembel          #+#    #+#             */
/*   Updated: 2021/08/17 11:40:02 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Karen.hpp"

Karen::Karen(void)
{
	this->_level[0] = "DEBUG";
	this->_level[1] = "INFO";
	this->_level[2] = "WARNING";
	this->_level[3] = "ERROR";
	dispatch[0] = &Karen::debug;
	dispatch[1] = &Karen::info;
	dispatch[2] = &Karen::warning;
	dispatch[3] = &Karen::error;
	return ;
}

Karen::~Karen(void)
{
	return ;
}

void	Karen::complain(std ::string level)
{
	int i = 0;
	while (i < 4)
	{
		if (level == this->_level[i])
			((*this).*dispatch[i])();
		i++;
	}
}

void	Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger.\n";
	std::cout <<"I just love it!" << std::endl;
	std::cout << std::endl;
	((*this).*dispatch[1])();
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money.\n";
	std::cout << "You don’t put enough!\n";
	std::cout << "If you did I would not have to ask for it!" << std::endl;
	std::cout << std::endl;
	((*this).*dispatch[2])();
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free.\n";
	std::cout << "I’ve been coming here for years and you just started working here last month." << std::endl;
	std::cout << std::endl;
	((*this).*dispatch[3])();
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}
