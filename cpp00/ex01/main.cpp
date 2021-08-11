/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 13:48:21 by thsembel          #+#    #+#             */
/*   Updated: 2021/08/05 18:04:53 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include "contact.hpp"
# include "phone_book.hpp"

void	print_strngap(std::string str)
{
	int i = 0;

	std::cout << str;
	while ((unsigned long)i < (10 - str.length()))
	{
		std::cout << " ";
		i++;
	}
	std::cout << "|";
}

void	print_nine(std::string str)
{
	int i = 0;

	while (i < 9)
	{
		putchar(str[i]);
		i++;
	}
	std::cout << ".|";
}

void	print_contact(class PhoneBook *book)
{
	std::string	index;
	int			i = 0;

	std::cout << std::endl << "Enter the contact Index:" << std::endl << ">";
	std::getline(std::cin, index);
	while (i < 8)
	{
		if (index[0] - 48 == i && index[1] == '\0')
		{
			std::cout << "************" << std::endl;
			std::cout << "|First name|	" << book->contact[i].first_name << std::endl;
			std::cout << "|Last name |	" << book->contact[i].last_name << std::endl;
			std::cout << "|Nickname  |	" << book->contact[i].nickname << std::endl;
			std::cout << "|Secret    |	" << book->contact[i].darksecret << std::endl;
			std::cout << "|Nb Phone  |	" << book->contact[i].phone_nb << std::endl;
			std::cout << "************\n" << std::endl;
			return ;
		}
		i++;
	}
	std::cout << "Contact not found\n" << std::endl;
}

void	search_contact(class PhoneBook *book, int *i)
{
	int j = 0;

	if (*i == 0)
	{
		std::cout << "The PhoneBook is empty" << std::endl;
		return ;
	}
	else if (*i > 8 )
		*i = 8;
	std::cout << "|**********|**********|**********|**********|" << std::endl;
	std::cout << "|Index     |First name|Last name |Nickname  |" << std::endl;
	while (j < *i)
	{
		std::cout << "|" << j << "         |";
		if (book->contact[j].first_name.length() > 10)
			print_nine(book->contact[j].first_name);
		else
			print_strngap(book->contact[j].first_name);
		if (book->contact[j].last_name.length() > 10)
			print_nine(book->contact[j].last_name);
		else
			print_strngap(book->contact[j].last_name);
		if (book->contact[j].nickname.length() > 10)
			print_nine(book->contact[j].nickname);
		else
			print_strngap(book->contact[j].nickname);
		std::cout << std::endl;
		j++;
	}
	std::cout << "|**********|**********|**********|**********|" << std::endl;
	print_contact(book);
}

Contact		add_contact(void)
{
	Contact contact;

	std::cout << "First name:\n>";
	std::getline(std::cin, contact.first_name);
	std::cout << std::endl;
	std::cout << "Last name:\n>";
	std::getline(std::cin, contact.last_name);
	std::cout << std::endl;
	std::cout << "Nickname:\n>";
	std::getline(std::cin, contact.nickname);
	std::cout << std::endl;
	std::cout << "Phone number:\n>";
	std::getline(std::cin, contact.phone_nb);
	std::cout << std::endl;
	std::cout << "Darkest secret:\n>";
	std::getline(std::cin, contact.darksecret);
	std::cout << std::endl << "Contact added to the Phonebook" << std::endl;
	std::cout << std::endl;
	return (contact);
}

void	menu(void)
{
	std::cout << "*********************************************" << std::endl;
	std::cout << "| Choose an option:                         |" << std::endl;
	std::cout << "|                                           |" << std::endl;
	std::cout << "|-> ADD                                     |" << std::endl;
	std::cout << "|-> SEARCH                                  |" << std::endl;
	std::cout << "|-> EXIT                                    |" << std::endl;
	std::cout << "*********************************************" << std::endl;
}

int		prompt_and_input(std::string input, PhoneBook *book, int *i)
{
	std::cout << std::endl;
	std::cout << ">";
	std::getline(std::cin, input);
	if (input == "EXIT")
		return (1);
	else if (input == "ADD")
	{
		if (*i < 8)
			book->contact[*i] = add_contact();
		else
			std::cout << "Sorry, the PhoneBook is full\n" << std::endl;
		*i += 1;
	}
	else if (input == "SEARCH")
		search_contact(book, i);
	return (0);
}

int	main(void)
{
	int			i = 0;
	bool		quit = false;
	PhoneBook	book;

	std::string	input;
	while (quit == false)
	{
		menu();
		if ((prompt_and_input(input, &book, &i)) > 0)
			quit = true;
	}
	std::cout << "Have a nice day, bye !" << std::endl;
	return (0);
}
