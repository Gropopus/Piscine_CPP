/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 14:20:10 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/23 17:56:20 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ARRAY_HPP
# define ARRAY_HPP
# include <exception>


template <typename T>
class	Array
{
	public:
		/********** Constructors & Destructors ********/
		Array(void) : _Array(NULL), _Size(0){}
		Array(unsigned int size) : _Array(new T[size]), _Size(size){}
		Array(Array const &copy)
		{
			_Size = copy._Size;
			_Array = new T[_Size];
			unsigned int i = 0;
			while (i < _Size)
			{
				_Array[i] = copy._Array[i];
				i++;
			}
			return ;
		}
		~Array(void) {delete [] _Array;}

		/***************** Overloads ******************/
		Array	&operator=(Array const &rhs)
		{
			if (_Size != 0 && _Size != rhs._Size)
				delete [] _Array;
			_Size = rhs._Size;
			_Array = new T[_Size];
			unsigned int i = 0;
			while (i < _Size)
			{
				_Array[i] = rhs._Array[i];
				i++;
			}
			return (*this);
		}

		T	&operator[](unsigned int i)
		{
			 if (i >= _Size)
				 throw OutOfLimitsException();
			 else
				 return (_Array[i]);
		}

		/***************** Exeption class ****************/
		class OutOfLimitsException : public std::exception
		{
			virtual const char *what() const throw()
			{
				return ("This element is out of the limits");
			}
		};

		/**************** Member function *****************/
		T	size(void) {return (_Size);}
	private:
		T *_Array;
		unsigned int _Size;
};

# endif
