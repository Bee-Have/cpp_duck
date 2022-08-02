/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:51:19 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/02 14:56:42 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Animal
{
	public:
		Animal();
		Animal(const Animal &cpy);
		~Animal();
		Animal	&operator=(const Animal &assign);
	
	void	makeSound() const;
	protected:
		std::string	type;
};
