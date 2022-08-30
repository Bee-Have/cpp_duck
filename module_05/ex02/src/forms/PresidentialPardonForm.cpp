/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 04:35:58 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/30 04:58:24 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

#define BOLD "\033[1m"
#define END "\33[0m"

/**
-----------------------------| CONSTRUCTORS |-----------------------------------
**/
PresidentialPardonForm::PresidentialPardonForm(void): Form("Pardon", 25, 5), _target("NoTarget")
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &cpy): Form(cpy), _target(cpy._target)
{}

PresidentialPardonForm::PresidentialPardonForm(const char *newtarget): Form("Pardon", 25, 5), _target(newtarget)
{}

/**
------------------------------| DESTRUCTOR |------------------------------------
**/
PresidentialPardonForm::~PresidentialPardonForm(void)
{}

/**
--------------------------| ASSIGNMENT OPERATOR |-------------------------------
**/
PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &assign)
{
	if (_target.compare(assign._target) != 0)
		_target.assign(assign._target);
	return (*this);
}

/**
--------------------------------| ACCESSORS |-----------------------------------
**/
std::string	PresidentialPardonForm::get_target(void) const
{
	return (_target);
}

/**
--------------------------------| METHODS |-------------------------------------
**/
void	PresidentialPardonForm::to_execute(void) const
{
	std::cout << BOLD << _target << END << " has been pardoned by the amazing " << BOLD << "Zaphod Beeblebrox" << END << std::endl;
}
