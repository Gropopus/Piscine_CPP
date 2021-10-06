/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 10:57:55 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/20 13:49:33 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class AForm;

class	Intern
{
	public:
		Intern(void);
		Intern(Intern const &copy);
		~Intern(void);
		Intern	&operator=(Intern const &rhs);
		AForm		*makeForm(std::string form_name, std::string target);
	private:
		std::string	_Tab[3];
		AForm		*createShrub(std::string target);
		AForm		*createRobot(std::string target);
		AForm		*createPresid(std::string target);
		AForm		*(Intern::*dispatch[3])(std::string target);
};

#endif
