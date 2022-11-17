/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 12:26:29 by amarini-          #+#    #+#             */
/*   Updated: 2022/11/17 14:41:29 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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

void	Bureaucrat::signForm(Form &theform)
{
	if (theform.get_is_signed() == true)
		std::cout << BOLD << name << END << " signed " << BOLD << theform.get_name() << END << std::endl;
	else
		std::cout << BOLD << name << END << " couldn't sign " << BOLD << theform.get_name() << END << " because " << BOLD << name << END << "'s grade is too low" << std::endl;
}

void	Bureaucrat::executeForm(Form const & form)
{
	if (form.get_is_signed() == false)
		std::cout << BOLD << name << END << " couldn't execute " << BOLD << form.get_name() << END << " because " << BOLD << form.get_name() << END << " has not been signed" << std::endl;
	else if (grade > form.get_exec_grade())
		std::cout << BOLD << name << END << " couldn't execute " << BOLD << form.get_name() << END << " because " << BOLD << name << END << "'s grade is too low" << std::endl;
	else
		std::cout << BOLD << name << END << " executed " << BOLD << form.get_name() << END << std::endl;
}