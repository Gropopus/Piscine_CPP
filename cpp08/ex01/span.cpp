/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 13:28:05 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/27 15:18:02 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "span.hpp"

/**************** Contstructors & Destructor ******************/
Span::Span(void) : _N(0)
{
	return ;
}

Span::Span(unsigned int N) : _N(N)
{
	return ;
}

Span::Span(Span const &copy)
{
	_N = copy._N;
	_Content = copy._Content;
	return ;
}

Span::~Span(void)
{
	return ;
}
/********************      Overload     ***********************/
Span	&Span::operator=(Span const &rhs)
{
	_N = rhs._N;
	_Content = rhs._Content;
	return (*this);
}

/*******************  Member Functions   **********************/
void	Span::addNumber(int nb)
{
	if (_Content.size() >= _N)
	{
		throw Span::FullStorageException();
		return ;
	}
	_Content.push_back(nb);
	std::cout << "Number " << nb << " Added" << std::endl;
}

void	Span::addRange(int a, int z)
{
	long range = z - a;
	if (range < 0)
		range = -range;
	if ((_Content.size() + range) >= _N)
	{
		throw Span::FullStorageException();
		return ;
	}
	int i = a;
	while (i <= z)
	{
		_Content.push_back(i);
		i++;
	}
}

unsigned int Span::shortestSpan(void)
{
	if (_Content.size() <= 1)
		throw Span::StorageEmptyException();

	long span = static_cast<long>(abs(_Content[0] - _Content[1]));
	unsigned int i = 1;
	unsigned int j;
	while (i < _Content.size())
	{
		j = 0;
		while (j < i)
		{
			if (span > static_cast<long> (abs(_Content[i] - _Content[j])))
				span = static_cast<long> (abs(_Content[i] - _Content[j]));
			j++;
		}
		i++;
	}
	return (static_cast<unsigned int>(span));
}

unsigned int Span::longestSpan(void)
{
	if (_Content.size() <= 1)
		throw Span::StorageEmptyException();

	long span = static_cast<long>(abs(_Content[0] - _Content[1]));
	unsigned int i = 1;
	unsigned int j;
	while (i < _Content.size())
	{
		j = 0;
		while (j < i)
		{
			if (span < static_cast<long>(abs(_Content[i] - _Content[j])))
				span = static_cast<long>(abs(_Content[i] - _Content[j]));
			j++;
		}
		i++;
	}
	return (static_cast<unsigned int>(span));
}
