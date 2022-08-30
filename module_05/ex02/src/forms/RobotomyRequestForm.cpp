/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 01:35:52 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/30 04:57:30 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include "RobotomyRequestForm.hpp"

#define BOLD "\033[1m"
#define END "\33[0m"

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
	std::cout << BOLD << "*drill noises*\n" << END;
	srand(time (0));
	if ((rand() % 2) == 0)
		std::cout << BOLD << _target << END << " has been Sucessfully " << BOLD << "robotomized" << END << std::endl;
	else
		std::cout << BOLD << _target << END << " failed to be " << BOLD << "robotomized" << END << std::endl;
}
