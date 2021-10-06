/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 14:13:40 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/22 16:49:00 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int		main(void)
{
	Data *ptr = new Data;

	ptr->nbr = 10;
	std::cout << "Address of ptr:\t\t\t\t" << ptr << "\nValue in ptr struct:\t\t\t" << ptr->nbr << std::endl;
	uintptr_t tmp_serialize = serialize(ptr);
	std::cout << "Address after serialize() use:\t\t" << tmp_serialize << std::endl;
	Data *recovered = deserialize(tmp_serialize);
	std::cout << "Address after deserialize() use:\t" << recovered << std::endl;
	std::cout << "Value after deserialize() use:\t\t" << recovered->nbr << std::endl;
	delete ptr;
	return (0);
}
