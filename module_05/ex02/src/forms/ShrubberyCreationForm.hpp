/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 08:44:13 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/30 00:59:56 by amarini-         ###   ########.fr       */
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

	private:
	// these constructor are private because we don't want them to be used
	// However we want them to exist to have a Canonical
		ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm &cpy);
	// Attribute
		std::string	_target;
		std::string	_file_name;
};
