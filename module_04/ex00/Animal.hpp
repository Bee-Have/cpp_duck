/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:51:19 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/02 15:09:51 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		std::string	get_type(void) const;
		void		set_type(std::string &cpy);

	protected:
		std::string	type;
};
