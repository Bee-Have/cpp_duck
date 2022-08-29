/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 01:19:40 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/30 01:26:29 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "Form.hpp"

class RobotomyRequestForm
{
	public:
	// Constructor
		RobotomyRequestForm(const char *newtarget);
	// Destructor
		~RobotomyRequestForm();
	// Copy assignment operator
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &assign);

	// Accessors
		std::string get_target() const;

	// Method
		void	to_execute() const;

	private:
	// these constructor are private because we don't want them to be used
	// However we want them to exist to have a Canonical
	//Constructors
		RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm &cpy);
	// Attributes
		std::string	_target;
};
