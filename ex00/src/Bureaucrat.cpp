/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 12:26:29 by amarini-          #+#    #+#             */
/*   Updated: 2022/11/17 14:49:52 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#define BOLD "\033[1m"
#define END "\33[0m"

/**
-----------------------------| CONSTRUCTORS |-----------------------------------
**/
Bureaucrat::Bureaucrat(void): name("Bureaucrat")
{
	// this must throw an error because there is no grade instantiated
	throw Bureaucrat::GradeTooLowException();
}

// you don't need to check the grade because it will be checked by cpy's constructor
Bureaucrat::Bureaucrat(Bureaucrat &cpy): name(cpy.name), grade(cpy.grade)
{}

Bureaucrat::Bureaucrat(int newgrade): name("Bureaucrat")
{
	if (newgrade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (newgrade < 1)
		throw Bureaucrat::GradeTooHighException();
	grade = newgrade;
}

Bureaucrat::Bureaucrat(int newgrade, const std::string &newname): name(newname)
{
	// try catch here for exeptions of grades (1 >= grade <= 150)
	if (newgrade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (newgrade < 1)
		throw Bureaucrat::GradeTooHighException();
	grade = newgrade;
}

/**
------------------------------| DESTRUCTOR |------------------------------------
**/
Bureaucrat::~Bureaucrat(void)
{}

/**
--------------------------| ASSIGNMENT OPERATOR |-------------------------------
**/
Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &assign)
{
	if (this != &assign && grade != assign.grade)
		grade = assign.grade;
	return (*this);
}

/**
----------------------------| OVERLOAD OPERATOR |-------------------------------
**/
std::ostream	&operator<<(std::ostream &stream, const Bureaucrat &obj)
{
	stream << BOLD << obj.getName() << END << ", bureaucrat grade " << BOLD << obj.getGrade() << END << ".";
	return (stream);
}

/**
--------------------------------| ACCESSORS |-----------------------------------
**/
std::string	Bureaucrat::getName(void) const
{
	return (name);
}

int	Bureaucrat::getGrade(void) const
{
	return (grade);
}


/**
--------------------------------| METHODS |-------------------------------------
**/
void	Bureaucrat::increment_grade(void)
{
	// diminishes grade
	if (grade == 1)
		throw Bureaucrat::GradeTooHighException();
	--grade;
}

void	Bureaucrat::decrement_grade(void)
{
	// augments grade
	if (grade == 150)
		throw Bureaucrat::GradeTooLowException();
	++grade;
}
