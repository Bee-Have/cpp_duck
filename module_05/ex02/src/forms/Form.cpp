/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 04:12:30 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/28 08:56:56 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/**
-----------------------------| CONSTRUCTORS |-----------------------------------
**/
Form::Form(void): _name("AForm"), _is_signed(false), _sign_grade(150), _exec_grade(150)
{
	// throw excpetion here because no grade has been supplied
}

Form::Form(Form &cpy): _name(cpy._name), _sign_grade(cpy._sign_grade), _exec_grade(cpy._exec_grade)
{
	if (cpy._is_signed != _is_signed)
		_is_signed = cpy._is_signed;
}

Form::Form(const char *newname, int sign_grade, int exec_grade): _name(newname), _is_signed(false), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	if (sign_grade < 1 || exec_grade < 1)
		throw Form::GradeTooHighException();
	if (sign_grade > 150 || exec_grade > 150)
		throw Form::GradeTooLowException();
}

/**
--------------------------| ASSIGNMENT OPERATOR |-------------------------------
**/
Form	&Form::operator=(const Form &assign)
{
	if (assign._is_signed != _is_signed)
		_is_signed = assign._is_signed;
	return (*this);
}

/**
----------------------------| OVERLOAD OPERATOR |-------------------------------
**/
std::ostream	&operator<<(std::ostream &stream, const Form &obj)
{
	// form <name> must be signed by grade <sign grade> and execute by grade <exec_grade>. it has been signed <is_signed>
	stream << obj.get_name() << ", must be signed by grade " << obj.get_sign_grade();
	stream << " and executed by grade " << obj.get_exec_grade();
	stream << ". it has been signed " << obj.get_is_signed();
	return (stream);
}

/**
--------------------------------| ACCESSORS |-----------------------------------
**/
std::string	Form::get_name(void)const
{
	return (_name);
}

bool		Form::get_is_signed(void) const
{
	return (_is_signed);
}

int			Form::get_sign_grade(void) const
{
	return (_sign_grade);
}

int			Form::get_exec_grade(void) const
{
	return (_exec_grade);
}

/**
--------------------------------| METHODS |-------------------------------------
**/
void	Form::beSigned(Bureaucrat &tosign)
{
	if (_is_signed == true)
		return ;
	if (tosign.getGrade() > _sign_grade)
	{
		tosign.signForm(*this);
		throw	Form::GradeTooLowException();
	}
	_is_signed = true;
	tosign.signForm(*this);
}

void	Form::execute(Bureaucrat const &executor) const
{
	if (_is_signed == false || executor.getGrade() > _exec_grade)
	{
		execute.executeForm(*this);
		if (_is_signed == false)
			throw	Form::FormNotSigned();
		else
			throw	Form::GradeTooLowException();
	}
	to_execute();
	execute.executeForm(*this);
}