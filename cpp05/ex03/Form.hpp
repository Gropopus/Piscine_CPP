/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 15:14:03 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/17 17:06:31 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class	AForm
{
	public:
		AForm(std::string name);
		AForm(std::string name, int sgrade, int egrade);
		AForm(AForm const &copy);
		virtual ~AForm(void);

		AForm &operator=(AForm const &rhs);

		std::string			getName(void) const;
		AForm				&beSigned(Bureaucrat const &emp);
		int					getSgrade(void) const;
		int					getEgrade(void) const;
		bool				getSigned(void) const;
		virtual void		execute(Bureaucrat &emp) const = 0;
		bool				isExecutable(Bureaucrat &emp) const;

		class				GradeTooLowException : public std::exception
		{
			public:
			virtual const char *what() const throw()
			{
				return ("RH: Your grade is too low.");
			}
		};

		class				GradeTooHighException : public std::exception
		{
			public:
			virtual const char *what() const throw()
			{
				return ("RH: This grade is too high.");
			}
		};
		class				IsNotSignedException : public std::exception
		{
			public:
			virtual const char *what() const throw()
			{
				return ("RH: Stop it ! This Form is not signed.");
			}
		};
	private:
		int const			_GradeSign;
		int	const			_GradeExec;
		bool				_Signed;
		std::string	const	_Name;
};

std::ostream	&operator<<(std::ostream &ostream, AForm const &form);
# endif
