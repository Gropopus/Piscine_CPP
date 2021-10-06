/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:23:52 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/17 13:12:40 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"

Form::Form(std::string name) : _GradeSign(80), _GradeExec(50), _Signed(false), _Name(name)
{
	std::cout << "Form default contructor called\n" << std::endl;
	return ;
}


Form::Form(std::string name, int sgrade, int egrade)
	: _GradeSign(sgrade), _GradeExec(egrade), _Signed(false), _Name(name)
{
	std::cout << "Form parameter constructor called" << std::endl;
	return ;
}

Form::Form(Form const &copy) : _GradeSign(copy.getSgrade()), _GradeExec(copy.getEgrade()),
	_Signed(copy.getSigned()), _Name(copy.getName())
{
	std::cout << "Form copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Form::~Form(void)
{
	std::cout << "Form Destructor called" << std::endl;
	return ;
}

Form		&Form::operator=(Form const &rhs)
{
	this->_Signed = rhs.getSigned();
	return (*this);
}

std::ostream	&operator<<(std::ostream &ostream, Form const &form)
{
	ostream << "Form:\t\t\t" << form.getName() << std::endl;
	ostream << "Grade to sign:\t\t" << form.getSgrade() << std::endl;
	ostream << "Grade to execute:\t" << form.getEgrade() << std::endl;
	if (form.getSigned() == true)
		ostream << "Signed" << std::endl;
	else
		ostream << "Not Signed" << std::endl;
	return (ostream);
}

Form	&Form::beSigned(Bureaucrat const &emp)
{
	if (emp.getGrade() <= _GradeSign)
		this->_Signed = true;
	return (*this);
}

std::string		Form::getName(void) const
{
	return (this->_Name);
}

int				Form::getSgrade(void) const
{
	return (this->_GradeSign);
}

int				Form::getEgrade(void) const
{
	return (this->_GradeExec);
}

bool			Form::getSigned(void) const
{
	return (this->_Signed);
}

