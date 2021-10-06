/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:33:40 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/27 16:47:04 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void)
		{
			return;
		}
		MutantStack(const MutantStack<T> &src)
		{
			*this = src;
		}
		MutantStack<T>& operator=(const MutantStack<T> &rhs) 
		{
			this->c = rhs.c;
			return *this;
		}
		~MutantStack(void)
		{
			return ;
		}
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin()
		{
			return this->c.begin();
		}
		iterator end()
		{
			return this->c.end();
		}
};


# endif
