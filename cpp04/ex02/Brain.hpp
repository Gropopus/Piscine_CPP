/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:24:53 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/14 15:05:45 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain
{
	public:
	Brain(void);
	Brain(Brain const &copy);
	virtual	~Brain(void);

	void		setIdea(std::string idea[100]);
	std::string	*getIdea(void);

	Brain &operator=(Brain const &rhs);
	private:
		std::string _Ideas[100];
};

# endif
