/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:51:19 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/02 19:37:34 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Animal
{
	public:
	// Constructors
		Animal();
		Animal(const Animal &cpy);
	// Destructors
		~Animal();
	// Copy Assignment operator
		Animal	&operator=(const Animal &assign);
	
	// Member functions
		void	makeSound() const;
	
	// Encapsulations
		std::string	getType(void) const;

	protected:
		std::string	type;
};
