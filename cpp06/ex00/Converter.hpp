/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 11:54:51 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/22 13:28:02 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONVERTER_HPP
# define CONVERTER_HPP
# include <iostream>
# include <string>
# include <exception>
# define INVALID	"Invalid"
# define CHAR		"Char"
# define INT		"Int"
# define DOUBLE		"Double"
# define FLOAT		"Float"

class	Converter
{
	public:
		Converter(std::string arg);
		Converter(Converter const &copy);
		~Converter(void);
		Converter	&operator=(Converter const &rhs);
		class		UndisplayableException :	public std::exception
		{
			public:
				virtual const char	*what() const throw()
				{
					return ("Non displayable");
				}
		};
		class		ImpossibleException :		public std::exception
		{
			public:
				virtual const char	*what() const throw()
				{
					return ("Impossible");
				}
		};
		int				toInt(void);
		float			toFloat(void);
		double			toDouble(void);
		char			toChar(void);
		std::string		getStr(void) const;
		bool			isDigit(void);
	private:
		int				_Intnb;
		float			_Floatnb;
		double			_Doublenb;
		char			_Character;
		std::string		_Str;
};

# endif
