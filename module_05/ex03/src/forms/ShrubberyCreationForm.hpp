/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 08:44:13 by amarini-          #+#    #+#             */
/*   Updated: 2022/10/01 05:15:07 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public:
	// Constructors
		ShrubberyCreationForm(const char *newtarget);
	// Destructor
		~ShrubberyCreationForm();
	// Copy assignment operator
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &assign);

	// Accessors
		std::string	get_target() const;

	// Method
		void	to_execute() const;
		static Form	*alloc(const char *target);

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
	// Constructors
		ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm &cpy);
	// Attributes
		std::string	_target;
		std::string	_file_name;
};
