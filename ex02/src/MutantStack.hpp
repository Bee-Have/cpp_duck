/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:46:37 by amarini-          #+#    #+#             */
/*   Updated: 2022/12/15 16:22:30 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <cstdlib>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
	// Iterator :declare iterator here ?

	// Constructors
		MutantStack(void): std::stack<T>() {}
		MutantStack(MutantStack &cpy): std::stack<T>() {this->c = cpy.c;}

	// Destructor
		~MutantStack(void) {}

	// Assignment operator
		MutantStack	operator=(const MutantStack &other) {this->c = other.c;}

	// Operators
		bool	operator==(const MutantStack &rhs)
		{
			if (this->c != rhs.c)
				return (false);
			return (true);
		}
		bool	operator!=(const MutantStack &rhs)
		{
			if (this->c != rhs.c)
				return(true);
			return (false);
		}
		bool	operator<(const MutantStack &rhs)
		{
			if (this->c < rhs.c)
				return (true);
			return (false);
		}
		bool	operator<=(const MutantStack &rhs)
		{
			if (this->c <= rhs.c)
				return (true);
			return (false);
		}
		bool	operator>(const MutantStack &rhs)
		{
			if (this->c > rhs.c)
				return (true);
			return (false);
		}
		bool	operator>=(const MutantStack &rhs)
		{
			if (this->c >= rhs.c)
				return (true);
			return (false);
		}

	// Element access
		T	&top(void) const {return (this->c.back());}
		T	top(void) {return (this->c.back());}

	// Iterator methods : begin, end, rbegin, rend

	// Capacity
		MutantStack	empty(void) const {this->c.empty;}
		size_t		size(void) const {return (this->c.size());}
	
	// Modifiers
		void		push(const T &value) {this->c.push_back(value);}
		void		pop(void) {this->c.pop_back();}
	private:
};
