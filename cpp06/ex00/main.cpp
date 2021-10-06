/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 11:04:11 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/23 13:09:12 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Converter.hpp"
# include <iostream>
# include <iomanip>

void	ft_try_double(Converter *conv)
{
	std::cout << "double:\t";
	try
	{
		std::cout << conv->toDouble() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	ft_try_float(Converter *conv)
{
	std::cout << "float:\t";
	try
	{
		std::cout << std::fixed << std::setprecision(1) << conv->toFloat() << "f" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	ft_try_int(Converter *conv)
{
	std::cout << "int:\t";
	try
	{
		std::cout << conv->toInt() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	ft_try_char(Converter *conv)
{
	std::cout << "char:\t";
	try
	{
		std::cout << conv->toChar() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	ft_convert(Converter *conv)
{
	ft_try_char(conv);
	ft_try_int(conv);
	ft_try_float(conv);
	ft_try_double(conv);
}

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage:\t./a.out <Argument>" << std::endl;
		return (0);
	}
	Converter conv(av[1]);
	ft_convert(&conv);
	return (0);
}
