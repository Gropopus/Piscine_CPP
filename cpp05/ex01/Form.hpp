/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 15:14:03 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/17 12:58:41 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class	Form
{
	public:
		Form(std::string name);
		Form(std::string name, int sgrade, int egrade);
		Form(Form const &copy);
		~Form(void);

		Form &operator=(Form const &rhs);

		std::string			getName(void) const;
		Form				&beSigned(Bureaucrat const &emp);
		int					getSgrade(void) const;
		int					getEgrade(void) const;
		bool				getSigned(void) const;
		class				GradeTooLowException : public std::exception
		{
			public:
			virtual const char *what() const throw()
			{
				return ("RH: This grade is too low, everybody has what it takes to sign this.");
			}
		};

		class				GradeTooHighException : public std::exception
		{
			public:
			virtual const char *what() const throw()
			{
				return ("RH: This grade is too high, only Jeff's could sign this.");
			}
		};
	private:
		int const			_GradeSign;
		int	const			_GradeExec;
		bool				_Signed;
		std::string	const	_Name;
};

std::ostream	&operator<<(std::ostream &ostream, Form const &form);
# endif
