/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 02:56:03 by amarini-          #+#    #+#             */
/*   Updated: 2022/10/01 04:09:41 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "Form.hpp"
// #include "ShrubberyCreationForm.hpp"
// #include "RobotomyRequestForm.hpp"
// #include "PresidentialPardonForm.hpp"

class Intern
{
	public:
	// Constructors
		Intern();
		Intern(Intern &cpy);
	// Destructor
		~Intern();
	// Copy assignment operator
		Intern	&operator=(const Intern &assign);
	// Method
		Form	*makeForm(std::string &form_name, std::string &form_target);
};
