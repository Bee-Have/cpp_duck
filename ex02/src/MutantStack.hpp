/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:46:37 by amarini-          #+#    #+#             */
/*   Updated: 2022/12/07 16:30:36 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

// TODO understand wtf is the c type mentioned everywhere
template <typename T>
class MutantStack
{
	public:
	// Constructors
		MutantStack();
		MutantStack(MutantStack &cpy);
		// constructor using iterator begin and end
		// constructor taking container (kind of like copy constructor)
		// constructor with allocator ?
	// Destructor
		~MutantStack();
	// Assignment operator
		MutantStack	operator=(MutantStack &assign);
	// Operators : ==, !=, <, <=, >=, <=>

	// Element access : top
	// Capacity : empty, size
	// Modifiers : push, emplace, pop, swap

	private:
		// c ?
};
