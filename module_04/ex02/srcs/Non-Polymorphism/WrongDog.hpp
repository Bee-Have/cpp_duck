/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 07:05:27 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/25 05:21:46 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"
#include "Brain.hpp"

class WrongDog: public WrongAnimal
{
	public:
	// Constructors
		WrongDog();
		WrongDog(const WrongDog &cpy);
	// Destructor
		~WrongDog();
	// Copy assignment operator
		WrongDog	&operator=(const WrongDog &assign);

	// Method
		void	makeSound() const;

	// Accessors
	Brain	*get_brain(void) const;
	void	set_brain(const Brain *cpy);
	
	private:
	// Variables
		Brain	*_brain;
};
