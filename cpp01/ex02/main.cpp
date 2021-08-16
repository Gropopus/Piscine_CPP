/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 11:32:30 by thsembel          #+#    #+#             */
/*   Updated: 2021/08/16 11:16:20 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int		main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR;
	std::string &stringREF = string;

	stringPTR = &string;
	std::cout << "Address of the string:\t\t\t" << &string << std::endl;
	std::cout << "Address of the string using stringPTR:\t" << stringPTR << std::endl;
	std::cout << "Address of the string using stringREF:\t" << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "string:\t\t" << string << std::endl;
	std::cout << "stringPTR:\t" << *stringPTR << std::endl;
	std::cout << "stringREF:\t" << stringREF << std::endl;

	return (0);
}
