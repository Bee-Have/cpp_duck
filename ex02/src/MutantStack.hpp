/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:46:37 by amarini-          #+#    #+#             */
/*   Updated: 2022/12/15 13:52:54 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <cstdlib>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
	// Constructors
		MutantStack(void): std::stack<T>() {}
		MutantStack(const T& cont):std::stack<T>(cont) {}
		// MutantStack( const Container& cont = Container() ); ?????
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
		MutantStack	top(void) {return (this->c.back());}

	// Capacity
		MutantStack	empty(void) const {this->c.empty;}
		size_t		size(void) const {return (this->c.size());}
	
	// Modifiers
		MutantStack	push(const T &value) {this->c.push_back(value);}
		void		pop(void) {this->c.pop_back();}
	private:
};
