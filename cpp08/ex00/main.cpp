/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 12:57:20 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/27 13:26:12 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"

template <typename T>
void	container_test()
{
	T test_vector;
	typename T::iterator i;

	test_vector.push_back(10);
	test_vector.push_back(42);
	test_vector.push_back(38);
	test_vector.push_back(2);
	i = easyfind(test_vector, 42);
	if (i == test_vector.end())
	{
		std::cout << "Oupsie, value not found" << std::endl;
	}
	else
		std::cout << *i << " value was found" << std::endl;
	i = easyfind(test_vector, 66666);
	if (i == test_vector.end())
	{
		std::cout << "Oupsie, value not found" << std::endl;
	}
	else
		std::cout << *i << " value was found" << std::endl;
}

int	main(void)
{
	std::cout << "***test with vector container filled with int type:" << std::endl;
	container_test <std::vector<int> >();
	std::cout << "***still vector container, but filled with float type" << std::endl;
	container_test <std::vector<float> >();
	std::cout << "*** test with list container filled with double type:" << std::endl;
	container_test <std::list<double> >();
	return (0);
}
