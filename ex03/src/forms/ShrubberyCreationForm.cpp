/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 08:49:01 by amarini-          #+#    #+#             */
/*   Updated: 2022/10/01 05:16:20 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "ShrubberyCreationForm.hpp"

/**
-----------------------------| CONSTRUCTORS |-----------------------------------
**/
ShrubberyCreationForm::ShrubberyCreationForm(void): Form("Shrubbery", 145, 137), _target("NoTarget")
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &cpy): Form(cpy), _target(cpy._target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const char *newtarget): Form("Shrubbery", 145, 137)
{
	if (newtarget == NULL)
		throw ShrubberyCreationForm::BadTargetInit();
	_target.assign(newtarget);
	_file_name.assign(newtarget);
	_file_name.append("_shrubbery");
}

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
	return (*this);
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
void	ShrubberyCreationForm::to_execute(void) const
{
	std::ofstream	outfile;

	outfile.open(_file_name);
	outfile << "               ,@@@@@@@,\n";
	outfile << "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n";
	outfile << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n";
	outfile << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n";
	outfile << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n";
	outfile << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n";
	outfile << "   `&%\\ ` /%&'    |.|        \\ '|8'\n";
	outfile << "       |o|        | |         | |\n";
	outfile << "       |.|        | |         | |\n";
	outfile << "_//_ \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_";
	outfile.close();
}

Form	*ShrubberyCreationForm::alloc(const char *target)
{
	return (new ShrubberyCreationForm(target));
}
