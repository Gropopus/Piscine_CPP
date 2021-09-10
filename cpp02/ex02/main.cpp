/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:41:54 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/08 12:08:19 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	{
		std::cout << "********** operator overloads ***********" << std::endl;
		Fixed a(40);
		Fixed b(10);
		std::cout << "test with -->a = 40 && b = 10" << std::endl;
		std::cout << "* a to float:" << std :: endl;
		printf("%f\n", a.toFloat());
		std::cout << "* b to float" << std::endl;
		printf("%f\n", b.toFloat());
		std::cout << "* addition:" << std::endl;
		std::cout << a + b << std::endl;
		std::cout << "* substraction:" << std::endl;
		std::cout << a - b << std::endl;
		std::cout << "* multipication:" << std::endl;
		std::cout << a * b << std::endl;
		std::cout << "* division:" << std::endl;
		std::cout << a / b << std::endl;
	}
	{
		std::cout << "**********        bool       ************" << std::endl;
		Fixed a(42);
		std::cout << "test with -->a = 42 && b = 21" << std::endl;
		std::cout << "* a > b:" << std::endl;
		std::cout << (a > Fixed(21)) << std::endl;
		std::cout << "* a < b:" << std::endl;
		std::cout << (a < Fixed(21)) << std::endl;
		std::cout << "* a <= b:" << std::endl;
		std::cout << (a <= Fixed(21)) << std::endl;
		std::cout << "* a >= b:" << std::endl;
		std::cout << (a >= Fixed(21)) << std::endl;
		std::cout << "* a == b:" << std::endl;
		std::cout << (a == Fixed(21)) << std::endl;
		std::cout << "* a != b:" << std::endl;
		std::cout << (a != Fixed(21)) << std::endl;
	}
	{
		std::cout << "**********     min & max     ************" << std::endl;
		Fixed a(10);
		Fixed b(5);
		Fixed const c(10);
		Fixed const d(5);
		std::cout << "test with -->a = 10, b = 5, (const)c = 10, (const)d = 5" << std::endl;
		std::cout << "* max(a, b):" << std::endl;
		std::cout << Fixed::max(a, b) << std::endl;
		std::cout << "* min(a, b)" << std::endl;
		std::cout << Fixed::min(a, b) << std::endl;
		std::cout << "* max(c, d):" << std::endl;
		std::cout << Fixed::max(c, d) << std::endl;
		std::cout << "* min(c, d):" << std::endl;
		std::cout << Fixed::min(c, d) << std::endl;
	}
	{
		Fixed a;
		Fixed const b( Fixed(5.05f) * Fixed( 2 ));
		std::cout << "******** Tests from the subject  ********" << std::endl;
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max(a, b) << std::endl;
	}
		return 0;
}
