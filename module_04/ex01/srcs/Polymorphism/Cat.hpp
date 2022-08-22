/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:15:59 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/16 14:59:08 by amarini-         ###   ########.fr       */
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

	private:
	// Variables
		Brain	*_brain;
};
