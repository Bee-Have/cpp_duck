/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:46:37 by amarini-          #+#    #+#             */
/*   Updated: 2022/12/15 16:34:11 by amarini-         ###   ########.fr       */
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
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

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
	iterator			begin(void) {return (this->c.begin());}
	iterator			begin(void) const {return (this->c.begin());}
	iterator			end(void) {return (this->c.end());}
	iterator			end(void) const {return (this->c.end());}
	reverse_iterator	rbegin() {return (this->c.rbegin());}
	reverse_iterator	rbegin() const {return (this->c.rbegin());}
	reverse_iterator	rend() {return (this->c.rend());}
	reverse_iterator	rend() const {return (this->c.rend());}

	// Capacity
		MutantStack	empty(void) const {this->c.empty;}
		size_t		size(void) const {return (this->c.size());}
	
	// Modifiers
		void		push(const T &value) {this->c.push_back(value);}
		void		pop(void) {this->c.pop_back();}
	private:
};
