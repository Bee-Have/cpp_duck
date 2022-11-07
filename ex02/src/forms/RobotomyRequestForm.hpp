/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 01:19:40 by amarini-          #+#    #+#             */
/*   Updated: 2022/10/01 02:18:21 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
	// Constructor
		RobotomyRequestForm(const char *newtarget);
	// Destructor
		~RobotomyRequestForm();
	// Copy assignment operator
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &assign);

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
		RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm &cpy);
	// Attributes
		std::string	_target;
};
