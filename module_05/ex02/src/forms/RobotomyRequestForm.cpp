/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 01:35:52 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/30 04:52:36 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include "RobotomyRequestForm.hpp"

/**
-----------------------------| CONSTRUCTORS |-----------------------------------
**/
RobotomyRequestForm::RobotomyRequestForm(void): Form("robotomy", 72, 45), _target("NoTarget")
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &cpy): Form(cpy), _target(cpy._target)
{}

RobotomyRequestForm::RobotomyRequestForm(const char *newtarget): Form("robotomy", 75, 45), _target(newtarget)
{}

/**
------------------------------| DESTRUCTOR |------------------------------------
**/
RobotomyRequestForm::~RobotomyRequestForm(void)
{}

/**
--------------------------| ASSIGNMENT OPERATOR |-------------------------------
**/
RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &assign)
{
	if (_target.compare(assign._target) != 0)
		_target.assign(assign._target);
	return (*this);
}

/**
--------------------------------| ACCESSORS |-----------------------------------
**/
std::string	RobotomyRequestForm::get_target(void) const
{
	return (_target);
}

/**
--------------------------------| METHODS |-------------------------------------
**/
void	RobotomyRequestForm::to_execute(void) const
{
	std::cout << "*drill noises*\n";
	srand(time (0));
	if ((rand() % 2) == 0)
		std::cout << _target << " has been Sucessfully robotomized" << std::endl;
	else
		std::cout << _target << " failed to be robotomized" << std::endl;
}
