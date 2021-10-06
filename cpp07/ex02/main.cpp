/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 14:18:43 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/24 11:10:00 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Array.hpp"
# include <iostream>

int		main(void)
{
	std::cout << "*** test with int ***" << std::endl;
	Array <int>test(42);
	Array <int>test2(10);
	int i = 0;
	while (i < 42)
	{
		test[i] = i;
		i++;
	}
	test2 = test;
	i = 0;
	std::cout << "A copy of test named test2 as been made using the copy constructor." << std::endl;
	std::cout << "content in test._Array[] and in test2._Array[] using operator[]" << std::endl;
	while (i < 42)
	{
		std::cout << "test:\t"<< test[i] << "\t\ttest2:\t" << test2[i] << std::endl;
		i++;
	}
	std::cout << "\nArray._Size using Array.size() function:\t" << test.size() << std::endl;
	std::cout << "\n*** Creation of an empty Array with basic constructor *** " << std::endl;
	Array <int>empty;
	std::cout << "_Size value in empty Array:\t" << empty.size() << std::endl;
	std::cout << "\n*** test with std::string ***" << std::endl;
	Array<std::string>strs(10);
	i = 0;
	std::cout << "Content in Array._Array[]:" << std::endl;
	while (i < 10)
	{
		strs[i] = "YeeeeeehHaaaa !";
		i++;
	}
	i = 0;
	while (i < 10)
	{
		std::cout << strs[i] << std::endl;
		i++;
	}
	std::cout << "*** test of the exception class nested in Array class ***" << std::endl;
	std::cout << "\n***trying to access a non allocated memory zone:" << std::endl;
	try
	{
		std::cout << strs[666] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
