/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 11:15:36 by amarini-          #+#    #+#             */
/*   Updated: 2022/11/17 11:52:19 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Form;

class Bureaucrat
{
	public:
	// Constructors
		Bureaucrat(Bureaucrat &cpy);
		Bureaucrat(int newgrade);
		Bureaucrat(int newgrade, const char *newname);
	// Destructor
		~Bureaucrat();
	// Assignment opertor
		Bureaucrat	&operator=(const Bureaucrat &assign);

	// Accessors
		std::string	getName() const;
		int			getGrade() const;

	// Methods
		void	increment_grade();
		void	decrement_grade();
		void	signForm(Form &theform);

	// Nested classes
		class GradeTooHighException : public std::exception
		{
			public:
				const char	*what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW
				{
					return ("Error: Grade cannot be higher then 1\n");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char	*what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW
				{
					return ("Error: Grade cannot be lower then 150\n");
				}
		};

	private:
	// Constructor
		Bureaucrat();
	// Attributes
		const std::string	name;
		int					grade;
};
// Operator overload "<<"
	std::ostream	&operator<<(std::ostream &stream, const Bureaucrat &obj);
