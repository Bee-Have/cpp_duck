/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:15:59 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/16 05:56:42 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

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
};
