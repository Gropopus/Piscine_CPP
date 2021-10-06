/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:47:44 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/27 15:30:00 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "span.hpp"
# include <iostream>

// main in the subject: //
/*int main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}*/

int		main(void)
{
	Span sp = Span(6);
	std::cout << "*** test of longestSpan() in an empty instance:" << std::endl;
	try
	{
		sp.longestSpan();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	Span test = Span(50000);
	std::cout << "\n*** test of addRange() with 2nd value out of range:" << std::endl;
	try
	{
		test.addRange(0, 100000);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	test.addRange(2, 4000);
	std::cout << "\n*** test of shortestSpan():" << std::endl;
	try
	{
		std::cout << "shortest span:\t" << test.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n*** test of longestSpan():" << std::endl;
	try
	{
		std::cout << "longestSpan:\t" << test.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n*** test of addNumber():" << std::endl;
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	try
	{
		sp.addNumber(666);
		std::cout << "shortest span:\t" << sp.shortestSpan() << std::endl;
		std::cout << "longestSpan:\t" << sp.longestSpan() << std::endl;
		sp.addNumber(59); //will throw the exception ->out of range
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
