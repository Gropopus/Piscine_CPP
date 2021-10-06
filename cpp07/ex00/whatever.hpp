/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 10:47:34 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/23 11:17:34 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>

template <typename T>
void	swap(T &arg1, T &arg2)
{
	T tmp;
	tmp = arg1;
	arg1 = arg2;
	arg2 = tmp;
}

template <typename T>
T	const	min(T const arg1, T const arg2)
{
	if (arg1 < arg2)
		return (arg1);
	else if (arg2 < arg1)
		return (arg2);
	else
		return (arg2);
}

template <typename T>
T	const	max(T const arg1, T const arg2)
{
	if (arg1 > arg2)
		return (arg1);
	else if (arg2 > arg1)
		return (arg2);
	else
		return (arg2);
}

# endif
