/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 01:52:11 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/16 02:15:54 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class WrongAnimal
{
	public:
	// Constructors
		WrongAnimal();
		WrongAnimal(const WrongAnimal &cpy);
	// Destructor
		~WrongAnimal();
	// Copy assignment operator
		WrongAnimal	&operator=(const WrongAnimal &assign);
	
	// Member function
		void	makeSound() const;
	// Encapsulation
		std::string	getType() const;

	protected:
		std::string	type;
};
