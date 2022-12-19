/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:10:25 by amarini-          #+#    #+#             */
/*   Updated: 2022/12/19 17:00:42 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include "MutantStack.hpp"

#define BOLD "\033[1m"
#define GB "\033[1;32m"
#define YB "\033[1;33m"
#define END "\33[0m"

template <typename T>
void	print_mutant(MutantStack<T> stack)
{
	if (stack.empty() == true)
	{
		std::cout << "MutantStack is empty\n";
		return ;
	}

	std::_Deque_iterator<T, T&, T*>	it = stack.end() - 1;
	for (; it != stack.begin() - 1; --it)
		std::cout << '[' << *it << ']';
	std::cout << '\n';
}

template <typename T>
void	print_stack(std::stack<T> stack)
{
	if (stack.empty() == true)
	{
		std::cout << "std::stack is empty\n";
		return ;
	}
	for (; stack.empty() == false; stack.pop())
		std::cout  << '{' << stack.top() << '}';
	std::cout << '\n';
}

int	main(void)
{
	std::cout << GB << "Simple tests :\n" << END;
	{
		MutantStack<int>	mutant_simple;
		std::stack<int>		stack_simple;

		std::cout << YB << "MutantStack is currently empty : " << END << mutant_simple.empty() << '\n';
		std::cout << YB << "std::stack is currently empty : " << END << stack_simple.empty() << '\n';
		std::cout << "MutantStack size is : " <<  mutant_simple.size() << '\n';
		std::cout << "std::stack size is : " <<  stack_simple.size() << '\n';

		std::cout << YB << "Filling MutantStack\n" << END;
		mutant_simple.push(1);
		mutant_simple.push(2);
		mutant_simple.push(3);
		mutant_simple.push(4);
		mutant_simple.push(5);
		print_mutant(mutant_simple);

		std::cout << YB << "Filling std::stack\n" << END;
		stack_simple.push(1);
		stack_simple.push(2);
		stack_simple.push(3);
		stack_simple.push(4);
		stack_simple.push(5);
		print_stack(stack_simple);

		std::cout << YB << "MutantStack is currently empty : " << END << mutant_simple.empty() << '\n';
		std::cout << YB << "std::stack is currently empty : " << END << stack_simple.empty() << '\n';
		std::cout << "MutantStack size is : " << mutant_simple.size() << '\n';
		std::cout << "std::stack size is : " << stack_simple.size() << '\n';

		std::cout << YB << "Delete (aka pop()) last element of MutantStack\n" << END;
		mutant_simple.pop();
		print_mutant(mutant_simple);
		std::cout << YB << "Delete (aka pop()) last element of std::stack\n" << END;
		stack_simple.pop();
		print_stack(stack_simple);

		std::cout << YB << "Element at the top of the MutantStack is : " << END << mutant_simple.top() << '\n';
		std::cout << YB << "Element at the top of the std::stack is : " << END << stack_simple.top() << '\n';
		std::cout << "MutantStack size is : " << mutant_simple.size() << '\n';
		std::cout << "std::stack size is : " << stack_simple.size() << '\n';
		print_mutant(mutant_simple);
		print_stack(stack_simple);
	}

	std::cout << GB << "\nConstructor tests :\n" << END;
	{
		MutantStack<float>	basic_mutant;
		std::stack<float>	basic_stack;

		std::cout << YB << "Create simple empty MutantStack\n" << END;
		std::cout << YB << "Create simple empty std::stack\n" << END;
		print_mutant(basic_mutant);
		print_stack(basic_stack);
		{
			MutantStack<float>	deep_mutant(basic_mutant);
			std::stack<float>	deep_stack(basic_stack);

			std::cout << YB << "Create copy MutantStack from simple empty MutantStack\n" << END;
			std::cout << YB << "Create copy std::stack from simple empty std::stack\n" << END;

			std::cout << YB << "Filling copy MutantStack\n" << END;
			deep_mutant.push(4183.0);
			deep_mutant.push(0.21);
			deep_mutant.push(42.10);
			print_mutant(deep_mutant);

			std::cout << YB << "Filling copy std::stack\n" << END;
			deep_stack.push(4183.0);
			deep_stack.push(0.21);
			deep_stack.push(42.10);
			print_stack(deep_stack);

			std::cout << YB << "Original MutantStack is still empty\n" << END;
			print_mutant(basic_mutant);
			std::cout << YB << "Original std::stack is still empty\n" << END;
			print_stack(basic_stack);
		}
		std::cout << YB << "Original MutantStack is still empty after destruction of copy MutantStack\n" << END;
		print_mutant(basic_mutant);
		std::cout << YB << "Original std::stack is still empty after destruction of copy std::stack\n" << END;
		print_stack(basic_stack);
	}

	std::cout << GB << "\nOperator tests :\n" << END;
	{
		MutantStack<char>	op_mutant;
		std::stack<char>	op_stack;

		std::cout << YB << "Create original char MutantStack and fill it :\n" << END;
		op_mutant.push('*');
		op_mutant.push(' ');
		op_mutant.push('|');
		op_mutant.push('c');
		print_mutant(op_mutant);

		std::cout << YB << "Create original char std::stack and fill it :\n" << END;
		op_stack.push('*');
		op_stack.push(' ');
		op_stack.push('|');
		op_stack.push('c');
		print_stack(op_stack);
		{
			MutantStack<char> cpy_mutant;
			std::stack<char> cpy_stack;
			cpy_mutant = op_mutant;
			cpy_stack = op_stack;
			std::cout << YB << "MutantStack cpy_mutant == op_mutant : " << END << (cpy_mutant == op_mutant) << '\n';
			std::cout << YB << "std::stack cpy_stack == op_stack : " << END << (cpy_stack == op_stack) << '\n';

			std::cout << YB << "Delete (aka pop()) last element of copy MutantStack\n" << END;
			cpy_mutant.pop();
			print_mutant(cpy_mutant);
			std::cout << YB << "Delete (aka pop()) last element of copy std::stack\n" << END;
			cpy_stack.pop();
			print_stack(cpy_stack);

			std::cout << YB << "Original MutantStack is still unchanged\n" << END;
			print_stack(op_stack);
			std::cout << YB << "Original std::stack is still unchanged\n" << END;
			print_mutant(op_mutant);
		}

		MutantStack<char>	equal_mutant;
		std::cout << YB << "Create MutantStack almost identical to original MutantStack\n" << END;
		equal_mutant.push('*');
		equal_mutant.push(' ');
		equal_mutant.push('|');
		print_mutant(equal_mutant);
		std::cout << "MutantStack equal_mutant == op_mutant : " << (equal_mutant == op_mutant) << '\n';
		std::cout << "MutantStack equal_mutant < op_mutant : " << (equal_mutant < op_mutant) << '\n';
		std::cout << "MutantStack equal_mutant <= op_mutant : " << (equal_mutant <= op_mutant) << '\n';
		std::cout << "MutantStack equal_mutant > op_mutant : " << (equal_mutant > op_mutant) << '\n';
		std::cout << "MutantStack equal_mutant >= op_mutant : " << (equal_mutant >= op_mutant) << '\n';
		std::cout << YB << "Make other stack identical to original MutantStack\n" << END;
		equal_mutant.push('c');
		print_mutant(equal_mutant);
		std::cout << "MutantStack equal_mutant == op_mutant : " << (equal_mutant == op_mutant) << '\n';
		std::cout << "MutantStack equal_mutant < op_mutant : " << (equal_mutant < op_mutant) << '\n';
		std::cout << "MutantStack equal_mutant <= op_mutant : " << (equal_mutant <= op_mutant) << '\n';
		std::cout << "MutantStack equal_mutant > op_mutant : " << (equal_mutant > op_mutant) << '\n';
		std::cout << "MutantStack equal_mutant >= op_mutant : " << (equal_mutant >= op_mutant) << '\n';
		std::cout << YB << "Change last character of other MutantStack to be 0\n" << END;
		equal_mutant.pop();
		equal_mutant.push(0);
		print_mutant(equal_mutant);
		std::cout << "MutantStack equal_mutant == op_mutant : " << (equal_mutant == op_mutant) << '\n';
		std::cout << "MutantStack equal_mutant < op_mutant : " << (equal_mutant < op_mutant) << '\n';
		std::cout << "MutantStack equal_mutant <= op_mutant : " << (equal_mutant <= op_mutant) << '\n';
		std::cout << "MutantStack equal_mutant > op_mutant : " << (equal_mutant > op_mutant) << '\n';
		std::cout << "MutantStack equal_mutant >= op_mutant : " << (equal_mutant >= op_mutant) << '\n';
	}
	
	std::cout << GB << "\nIterator tests :\n" << END;
	{
		MutantStack<std::string>	mutant;

		std::cout << YB << "Create and fill std::string MutantStack\n" << END;
		mutant.push("see");
		mutant.push("you");
		mutant.push("space");
		mutant.push("Cowboy");
		print_mutant(mutant);
		std::cout << "MutantStack size is : " << mutant.size() << '\n';
		std::_Deque_iterator<std::string, std::string&, std::string*>	it = mutant.begin();
		std::cout << YB << "Print MutantStack using iterators : " << END;
		for (; it != mutant.end(); ++it)
			std::cout << '[' << *it << ']';
		std:: cout << '\n';
		
		it = mutant.end() - 1;
		std::cout << YB << "Deleting (aka pop()) MutantStack elements using iterators\n" << END;
		for (; it != mutant.begin() - 1; --it)
			mutant.pop();
		std::cout << YB << "Print MutantStack to check if it is empty : " << END;
		print_mutant(mutant);
		std::cout << "MutantStack size is : " << mutant.size() << '\n';
	}
	
	std::cout << GB << "\nMandatory 42 tests :(MutantStack)\n" << END;
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << GB << "\nMandatory 42 tests :(std::list)\n" << END;
	{
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << *mstack.rbegin() << std::endl;
		mstack.pop_back();
		std::cout << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		//[...]
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		// std::stack<int> s(mstack);
	}
	return (0);
}