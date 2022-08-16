/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:15:59 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/02 19:20:15 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class	Dog: public Animal
{
	public:
	// Constructeur
		Dog();
		Dog(const Dog &cpy);
	// Destructor
		~Dog();
	// Copy Assignment operator
		Dog	&operator=(const Dog &assign);
	
	// Method
		void	makeSound() const;
};
