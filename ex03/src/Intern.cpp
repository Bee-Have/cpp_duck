/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 03:04:36 by amarini-          #+#    #+#             */
/*   Updated: 2022/10/01 05:17:08 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#define BOLD "\033[1m"
#define END "\33[0m"

/**
-----------------------------| CONSTRUCTORS |-----------------------------------
**/
Intern::Intern(void)
{}

Intern::Intern(Intern &cpy)
{
	(void)cpy;
}

/**
------------------------------| DESTRUCTOR |------------------------------------
**/
Intern::~Intern(void)
{}

/**
--------------------------| ASSIGNMENT OPERATOR |-------------------------------
**/
Intern	&Intern::operator=(const Intern &assign)
{
	(void)assign;
	return (*this);
}

/**
--------------------------------| METHODS |-------------------------------------
**/
Form	*Intern::makeForm(std::string &form_name, std::string &form_target)
{
	char					cases[3][28] = {"shruberry request", "robotomy request", "presidential pardon request"};
	Form	*(*type[3])(const char *target);
	int						i = 0;

	type[0] = ShrubberyCreationForm::alloc;
	type[1] = RobotomyRequestForm::alloc;
	type[2] = PresidentialPardonForm::alloc;
	for (; i < 3; ++i)
		if (form_name.compare(cases[i]) == 0)
			break ;
	if (i == 3)
	{
		std::cout << "Form does NOT EXIST\n";
		return (NULL);
	}
	std::cout << "Intern creates " << form_name << std::endl;
	return (type[i](form_target.c_str()));
}
