/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 16:07:36 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/27 17:06:50 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "mutantstack.hpp"
# include <iostream>
# include <list>

int main(void)
{
	{
		std::cout << "================ Test with MutantStack =================" << std::endl;
		std::cout << "*** push() with these value: 5, 17, 23, 99:" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		mstack.push(23);
		mstack.push(99);
		std::cout << "\nvalue a the top of the stack using top() function: " << mstack.top() << std::endl;
		std::cout << "size of the stack using size() function: " << mstack.size() << std::endl;
		std::cout << "\nremoving the top value using pop() function." << std::endl;
		mstack.pop();
		std::cout << "size of the stack is now: " << mstack.size() << std::endl;
		std::cout << "\n3, 42, 737, 0 added to the stack" << std::endl;
		mstack.push(3);
		mstack.push(42);
		mstack.push(737);
		mstack.push(0);
		std::cout << "now lets display the stack content using iterators:" << std::endl;
		MutantStack<int>::iterator start = mstack.begin();
		MutantStack<int>::iterator end = mstack.end();
		std::cout << "start iterator is stack.begin() --> " << *start << std::endl;
		std::cout << "end iterator is stack.end() --> " << *end << std::endl;
		std::cout << "incrementing start ans displaying it's content" << std::endl;
		while (start != end)
		{
			std::cout << *start << std::endl;
			++start;
		}
		std::cout << "test with empty() function: (returns 1 if empty, 0 if not)" << std::endl;
		std::cout << "output: " << mstack.empty() << std::endl;
		std::cout << "same test with empty stack:" << std::endl;
		MutantStack<int> empty;
		std::cout << "output: " << empty.empty() << std::endl;
	}
	{
		std::cout << "\n\n=============== Same tests with std::list ==============\n" << std::endl;
		std::cout << "*** push() with these value: 5, 17, 23, 99:" << std::endl;
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		mstack.push_back(23);
		mstack.push_back(99);
		std::cout << "\nvalue a the top of the list using top() function: " << mstack.back() << std::endl;
		std::cout << "size of the list using size() function: " << mstack.size() << std::endl;
		std::cout << "\nremoving the top value using pop() function." << std::endl;
		mstack.pop_back();
		std::cout << "size of the list is now: " << mstack.size() << std::endl;
		std::cout << "\n3, 42, 737, 0 added to the list" << std::endl;
		mstack.push_back(3);
		mstack.push_back(42);
		mstack.push_back(737);
		mstack.push_back(0);
		std::cout << "now lets display the list content using iterators:" << std::endl;
		std::list<int>::iterator start = mstack.begin();
		std::list<int>::iterator end = mstack.end();
		std::cout << "start iterator is list.begin() --> " << *start << std::endl;
		std::cout << "incrementing start ans displaying it's content" << std::endl;
		while (start != end)
		{
			std::cout << *start << std::endl;
			start++;;
		}
		std::cout << "test with empty() function: (returns 1 if empty, 0 if not)" << std::endl;
		std::cout << "output: " << mstack.empty() << std::endl;
		std::cout << "same test with empty list:" << std::endl;
		std::list<int> empty;
		std::cout << "output: " << empty.empty() << std::endl;
	}
	return 0;
}
