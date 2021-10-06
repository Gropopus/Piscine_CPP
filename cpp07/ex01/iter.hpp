/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 11:22:05 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/24 10:56:20 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ITER_HPP
# define ITER_HPP

template<typename T>
void	iter(T array[], int const len, void function(T &param))
{
	int i = 0;
	while (i < len)
	{
		function(array[i]);
		i++;
	}
}

template<typename T>
void	function(T &param)
{
	if ((param >= 65 && param <= 90) || (param >= 97 && param <= 122))
		param -= 32;
}

#endif
