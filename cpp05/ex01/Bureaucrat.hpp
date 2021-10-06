/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:24:15 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/16 17:48:14 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>
# include "Form.hpp"

class Form;

class	Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &copy);
		~Bureaucrat(void);

		Bureaucrat &operator=(Bureaucrat const &rhs);

		std::string			getName(void) const;
		int					getGrade(void) const;
		void				signForm(Form &form);
		void				gradePlus(void);
		void				gradeMinus(void);
		class				GradeTooLowException : public std::exception
		{
			public:
			virtual const char *what() const throw()
			{
				return ("RH: Your grade can't be lower 150, you don't have what it takes to work with us.");
			}
		};

		class				GradeTooHighException : public std::exception
		{
			public:
			virtual const char *what() const throw()
			{
				return ("RH: Your grade can't be higher than 1, you'll never be Jeff's boss.");
			}
		};
	private:
		unsigned int		_Grade;
		std::string	const	_Name;
};

std::ostream	&operator<<(std::ostream &ostream, Bureaucrat const &emp);
#endif
