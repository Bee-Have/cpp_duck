/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 08:49:01 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/28 09:00:43 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/**
-----------------------------| CONSTRUCTORS |-----------------------------------
**/
ShrubberyCreationForm::ShrubberyCreationForm(void): Form("Shrubbery", 145, 137), _target("NoTarget")
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &cpy): Form(cpy), _target(cpy._target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const char *newtarget): Form("Shrubbery", 145, 137), _target(newtarget)
{}

/**
------------------------------| DESTRUCTOR |------------------------------------
**/
ShrubberyCreationForm::~ShrubberyCreationForm(void)
{}

/**
--------------------------| ASSIGNMENT OPERATOR |-------------------------------
**/
ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign)
{
	if (_target.compare(assign._target) != 0)
		_target.assign(assign._target);
}

/**
--------------------------------| ACCESSORS |-----------------------------------
**/
std::string	ShrubberyCreationForm::get_target(void) const
{
	return (_target);
}

/**
--------------------------------| METHODS |-------------------------------------
**/
void	ShrubberyCreationForm::to_execute(void)
{
	// read subject for this part
}
