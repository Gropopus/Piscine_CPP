/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 12:47:24 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/28 11:29:30 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>
# include <iostream>
# include <iterator>
# include <list>
# include <vector>
# include <string>

template <typename T>
typename T::iterator easyfind(T &container, int nbToFind)
{
	return (std::find(container.begin(), container.end(), nbToFind));
}

# endif
