/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 18:19:55 by thsembel          #+#    #+#             */
/*   Updated: 2021/08/17 11:08:12 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef KAREN_HPP
# define KAREN_HPP
# include <iostream>

class	Karen
{
	public:
		Karen(void);
		~Karen(void);
		void	complain(std::string level);
		
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		std::string _level[4];
		void	(Karen::*dispatch[4])(void);
};


#endif
