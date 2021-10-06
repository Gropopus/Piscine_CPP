/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:23:52 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/17 15:45:15 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"

AForm::AForm(std::string name) : _GradeSign(80), _GradeExec(50), _Signed(false), _Name(name)
{
	std::cout << "Form default contructor called\n" << std::endl;
	return ;
}


AForm::AForm(std::string name, int sgrade, int egrade)
	: _GradeSign(sgrade), _GradeExec(egrade), _Signed(false), _Name(name)
{
	std::cout << "Form parameter constructor called" << std::endl;
	return ;
}

AForm::AForm(AForm const &copy) : _GradeSign(copy.getSgrade()), _GradeExec(copy.getEgrade()),
	_Signed(copy.getSigned()), _Name(copy.getName())
{
	std::cout << "Form copy constructor called" << std::endl;
	*this = copy;
	return ;
}

AForm::~AForm(void)
{
	std::cout << "Form Destructor called" << std::endl;
	return ;
}

AForm		&AForm::operator=(AForm const &rhs)
{
	this->_Signed = rhs.getSigned();
	return (*this);
}

std::ostream	&operator<<(std::ostream &ostream, AForm const &form)
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

AForm	&AForm::beSigned(Bureaucrat const &emp)
{
	if (emp.getGrade() <= _GradeSign)
		this->_Signed = true;
	return (*this);
}

std::string		AForm::getName(void) const
{
	return (this->_Name);
}

int				AForm::getSgrade(void) const
{
	return (this->_GradeSign);
}

int				AForm::getEgrade(void) const
{
	return (this->_GradeExec);
}

bool			AForm::getSigned(void) const
{
	return (this->_Signed);
}

bool			AForm::isExecutable(Bureaucrat &emp) const
{
	try
	{
		if (this->_Signed == false)
		{
			throw AForm::IsNotSignedException();
		}
		else if (emp.getGrade() > this->_GradeExec)
		{
			throw AForm::GradeTooLowException();
		}
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
		return (false);
	}
	return (true);
}
