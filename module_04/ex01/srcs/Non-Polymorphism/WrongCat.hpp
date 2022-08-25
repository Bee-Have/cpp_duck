/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 02:19:21 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/25 05:26:22 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"
#include "Brain.hpp"

class WrongCat: public WrongAnimal
{
	public:
	// Constructors
		WrongCat();
		WrongCat(const WrongCat &cpy);
	// Destructor
		~WrongCat();
	// Copy assignment operator
		WrongCat	&operator=(const WrongCat &assign);

	// Method
		void	makeSound() const;

	// Accessors
	Brain	*get_brain() const;
	void	set_brain(const Brain *cpy);

	private:
	// Variables
		Brain	*_brain;
};
