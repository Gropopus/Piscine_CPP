/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 15:22:58 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/22 16:45:33 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <ctime>
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"
# include "Base.hpp"

Base*	generate(void)
{
	Base *base;
	std::srand(time(NULL));
	int nb = std::rand();

	if (nb % 2 == 0)
		base = new A;
	else if (nb % 3 == 0)
		base = new B;
	else
		base = new C;
	return (base);
}

/*dynamic_cast casts during excecution process, works only with 
 * polymorphic class (containing at least a virtual type fuction)*/

void	identify_from_pointer(Base *p)
{
	A	*a;
	B	*b;
	C	*c;
	if ((a = dynamic_cast<A *>(p)) != NULL)
		std::cout << "A" << std::endl;
	else if ((b = dynamic_cast<B *>(p)) != NULL)
		std::cout << "B" << std::endl;
	else if ((c = dynamic_cast<C *>(p)) != NULL)
		std::cout << "C" << std::endl;
}

void identify_from_reference( Base &p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		(void)&a;
	}
	catch (...)
	{
		;
	}
	try
	{
		B &b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		(void)&b;
	}
	catch(...)
	{
		;
	}
	try
	{
		C &c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		(void)&c;
	}
	catch(...)
	{
		;
	}
}

int		main(void)
{
	Base *base;
	base = generate();
	Base &ref = *base;
	std::cout << "* Indentify from *Pointer:" << std::endl;
	identify_from_pointer(base);
	std::cout << "\n* Identify from &Reference:" << std::endl;
	identify_from_reference(ref);
	delete base;
	return (0);
}
