/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:58:13 by thsembel          #+#    #+#             */
/*   Updated: 2021/08/12 14:34:20 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class	Contact
{
	public:
		Contact(void);
		~Contact(void);
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	darksecret;
		std::string	phone_nb;
};

#endif
