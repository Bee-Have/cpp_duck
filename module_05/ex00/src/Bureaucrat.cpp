/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 12:26:29 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/28 03:11:17 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/**
-----------------------------| CONSTRUCTORS |-----------------------------------
**/
Bureaucrat::Bureaucrat(void): name("Bureaucrat")
{
	// this must throw an error because there is no grade instantiated
	throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat &cpy): name(cpy.name)
{
	if (grade != cpy.grade)
	{
		if (cpy.grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else if (cpy.grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			grade = cpy.grade;
	}
}

Bureaucrat::Bureaucrat(int newgrade): name("Bureaucrat")
{
	if (newgrade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (newgrade < 1)
		throw Bureaucrat::GradeTooHighException();
	grade = newgrade;
}

Bureaucrat::Bureaucrat(int newgrade, const char *newname): name(newname)
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
	if (assign.grade > 150)
		throw GradeTooLowException();
	else if (assign.grade < 1)
		throw GradeTooHighException();
	else if (grade != assign.grade)
		grade = assign.grade;
	return (*this);
}

/**
----------------------------| OVERLOAD OPERATOR |-------------------------------
**/
std::ostream	&operator<<(std::ostream &stream, const Bureaucrat &obj)
{
	stream << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
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
	if (grade == 150)
		throw Bureaucrat::GradeTooLowException();
	--grade;
}

void	Bureaucrat::decrement_grade(void)
{
	// augments grade
	if (grade == 1)
		throw Bureaucrat::GradeTooHighException();
	++grade;
}
