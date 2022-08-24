/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:15:59 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/24 20:08:35 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

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
	
	// Accessors
		Brain	*get_brain(void) const;
		void	set_brain(const Brain *cpy);
	
	private:
	// Variables
		Brain	*_brain;
};
