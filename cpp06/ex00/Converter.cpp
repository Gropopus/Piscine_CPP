/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 12:00:49 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/22 17:02:39 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Converter.hpp"

Converter::Converter(std::string arg) : _Str(arg)
{
	return ;
}

Converter::Converter(Converter const &copy)
{
	_Str = copy.getStr();
	*this = copy;
	return ;
}

Converter::~Converter(void)
{
	return ;
}

Converter &Converter::operator=(Converter const &rhs)
{
	_Str = rhs.getStr();
	return (*this);
}

std::string		Converter::getStr(void) const
{
	return (this->_Str);
}

bool			Converter::isDigit(void)
{
	int i = 0;

	while (_Str[i])
	{
		if (_Str[i] < '0' || _Str[i] > '9')
			return (false);
		i++;
	}
	return (true);
}

int			Converter::toInt(void)
{
	double nb;

	try
	{
		nb = static_cast<double>(std::strtod(_Str.c_str(), NULL));
		if (nb > 2147483647 || nb < -2147483648 || _Str == "nan" || _Str == "nanf")
		{
			throw Converter::ImpossibleException();
			return (0);
		}
	}
	catch (std::invalid_argument &e)
	{
		throw Converter::ImpossibleException();
		return (0);
	}
	catch (std::out_of_range &e)
	{
		throw Converter::ImpossibleException();
		return (0);
	}
	_Intnb = static_cast<int>(nb);
	return (_Intnb);
}

char		Converter::toChar(void)
{
	if (isDigit() == true)
	{
		try
		{
			toInt();
		}
		catch (std::exception &e)
		{
			throw Converter::ImpossibleException();
			return ('\0');
		}
		if (_Intnb < 0 || _Intnb > 127)
		{
			throw Converter::ImpossibleException();
			return ('\0');
		}
		else if (_Intnb < 32 || _Intnb > 126)
		{
			throw Converter::UndisplayableException();
			return ('\0');
		}
		_Character = static_cast<char>(_Intnb);
	}
	else
	{
		if (_Str.length() > 1)
		{
			throw Converter::ImpossibleException();
			return ('\0');
		}
		_Character = static_cast<char>(_Str[0]);
		if (_Character < ' ' || _Character > '~')
		{
			throw Converter::UndisplayableException();
			return ('\0');
		}
	}
	return (_Character);
}

float		Converter::toFloat(void)
{
	try
	{
		_Floatnb = static_cast<float>(std::strtof(_Str.c_str(), NULL));
		return (_Floatnb);
	}
	catch (std::invalid_argument &e)
	{
		throw Converter::ImpossibleException();
		return (0);
	}
	catch (std::out_of_range &e)
	{
		throw Converter::ImpossibleException();
		return (0);;
	}
}

double		Converter::toDouble(void)
{
	try
	{
		_Doublenb = static_cast<double>(std::strtod(_Str.c_str(), NULL));
		return (_Doublenb);
	}
	catch (std::invalid_argument &e)
	{
		throw Converter::ImpossibleException();
		return (0);
	}
	catch (std::out_of_range &e)
	{
		throw Converter::ImpossibleException();
		return (0);
	}
}
