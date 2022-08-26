/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 12:26:29 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/26 12:49:49 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/**
-----------------------------| CONSTRUCTORS |-----------------------------------
**/
Bureaucrat::Bureaucrat(void): name("Bureaucrat")
{
	// this must throw an error because there is no grade instantiated
}

Bureaucrat::Bureaucrat(Bureaucrat &cpy)
{
	if (name.compare(cpy.name) != 0)
		name.assign(cpy.name); // is it because it is const ?
	if (grade != cpy.grade)
		grade = cpy.grade;
}

Bureaucrat::Bureaucrat(int grade): name("Bureaucrat")
{
	// try catch here for exeptions of grades (1 >= grade <= 150)
	grade = grade;
}

Bureaucrat::Bureaucrat(int grade, const char *newname): name(newname)
{
	// try catch here for exeptions of grades (1 >= grade <= 150)
	grade = grade;
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
	if (grade != assign.grade)
		grade = assign.grade;
	if (name.compare(assign.name) != 0)
		name.assign(assign.name); // is it because it is const ?
}

/**
----------------------------| OVERLOAD OPERATOR |-------------------------------
**/
std::ostream	&operator<<(std::ostream &stream, const Bureaucrat &obj)
{
	// read subject for this part
	stream << obj.getName() << ", bureaucrat grade " << obj.getGrade();
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
	// try catch here for exeptions of grades (1 >= grade <= 150)
	--grade;
}

void	Bureaucrat::decrement_grade(void)
{
	// augments grade
	// try catch here for exeptions of grades (1 >= grade <= 150)
	++grade;
}
