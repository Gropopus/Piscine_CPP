/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 13:28:23 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/27 15:06:40 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>
# include <iostream>

class	Span
{
	public:
		/*** Constructors & destructor ****/
		Span(void);
		Span(unsigned int N);
		Span(Span const &copy);
		~Span(void);
		/*******     Overload       *******/
		Span	&operator=(Span const &rhs);
		/*******  Member functions  *******/
		void	addNumber(int nb);
		void	addRange(int a, int z);
		unsigned int		shortestSpan(void);
		unsigned int		longestSpan(void);
		/****  Nested Exception class *****/
		class	StorageEmptyException : public std::exception
		{
			virtual const char *what() const throw()
			{
				return ("Not enought numbers to have a Span");
			}
		};
		class	FullStorageException : public std::exception
		{
			virtual const char *what() const throw()
			{
				return ("The Storage is full");
			}
		};
	private:
		unsigned int _N;
		std::vector<int> _Content;
};
# endif
