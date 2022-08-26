/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:15:59 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/25 01:44:15 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat: public Animal
{
	public:
	// Constructeur
		Cat();
		Cat(const Cat &cpy);
	// Destructor
		~Cat();
	// Copy sssignment operator
		Cat	&operator=(const Cat &assign);

	// Method
		void	makeSound() const;

	// Accessors
		Brain	*get_brain() const;
		void	set_brain(const Brain *cpy);

	private:
	// Variables
		Brain	*_brain;
};
