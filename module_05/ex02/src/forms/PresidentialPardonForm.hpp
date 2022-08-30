/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 03:07:11 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/30 04:35:03 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class PresidentialPardonForm
{
	public:
	// Constructor
		PresidentialPardonForm(const char *newtarget);
	// Destructor
		~PresidentialPardonForm();
	// Copy assignment operator
		PresidentialPardonForm	&operator=(const PresidentialPardonForm &assign);

	// Accessor
		std::string	get_target() const;
	// Method
		void	to_execute() const;

	private:
	// these constructor are private because we don't want them to be used
	// However we want them to exist to have a Canonical
	//Constructors
		PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm &cpy);
	// Attribute
		std::string	_target;
};
