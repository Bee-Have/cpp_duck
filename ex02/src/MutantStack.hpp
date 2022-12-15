/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:46:37 by amarini-          #+#    #+#             */
/*   Updated: 2022/12/15 13:21:08 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>

// 'c' is inherited from the std::stack container
template <typename T>
class MutantStack : public std::stack<T>
{
	public:
	// Constructors
		MutantStack() {}

		// MutantStack( const Container& cont = Container() ); ?????

		MutantStack(MutantStack &cpy) {}
	// Destructor
		~MutantStack() {}
	// Assignment operator
		MutantStack	operator=(const MutantStack &other) {this->c = other.c;}
		MutantStack	operator=(MutantStack &&other) {this->c = std::move(other.c);}
	// Operators : ==, !=, <, <=, >=
		bool	operator==(const MutantStack &rhs) {}
		bool	operator!=(const MutantStack &rhs) {}
		bool	operator<(const MutantStack &rhs) {}
		bool	operator<=(const MutantStack &rhs) {}
		bool	operator>(const MutantStack &rhs) {}
		bool	operator>=(const MutantStack &rhs) {}

	// Element access : top : returnthetop element of the stack (the most recently pushed)
		MutantStack	top(void) {return (this->c.back());}
	// Capacity : empty, size
		MutantStack	empty(void) const {this->c.empty;}
		size_t		size(void) const {return (this->c.size());}
	
	// Modifiers : push, pop
		MutantStack	push(const T &value) {this->c.push_back(value);}
		MutantStack	push(T &&value) {this->c.push_back(std::move(value));}
		void		pop(void) {this->c.pop_back();}
	private:
};
