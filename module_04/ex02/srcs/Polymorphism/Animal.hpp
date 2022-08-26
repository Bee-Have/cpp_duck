/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:51:19 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/26 07:17:55 by amarini-         ###   ########.fr       */
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
		virtual ~Animal();
	// Copy assignment operator
		Animal	&operator=(const Animal &assign);
	
	// Member functions
		virtual void	makeSound() const = 0;
	// Encapsulations
		std::string	getType() const;

	protected:
		std::string	type;
};
