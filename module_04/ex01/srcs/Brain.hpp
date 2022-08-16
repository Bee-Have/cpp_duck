/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 08:59:07 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/16 10:13:45 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Brain
{
	public:
	// Constructeurs
		Brain();
		Brain(const Brain &cpy);
	// Destructeur
		~Brain();
	// Copy assignment operator
		Brain	&operator=(const Brain &assign);
	// Encapsulation
		const std::string	*get_ideas(void) const;
		const std::string	&get_ideas(int index) const;
		void				set_ideas(std::string *cpy);
		void				set_ideas(int index, std::string cpy);

	protected:
	// Data
		std::string	ideas[100];
};
