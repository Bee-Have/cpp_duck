/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 03:07:11 by amarini-          #+#    #+#             */
/*   Updated: 2022/10/01 02:18:53 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class PresidentialPardonForm: public Form
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

	// Nested class
		class BadTargetInit : public std::exception
		{
			public:
				const char	*what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW
				{
					return ("Error: Target of form Cannot be NULL\n");
				}
		};

	private:
	// these constructor are private because we don't want them to be used
	// However we want them to exist to have a Canonical
	//Constructors
		PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm &cpy);
	// Attribute
		std::string	_target;
};
