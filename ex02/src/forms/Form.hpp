/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 03:51:01 by amarini-          #+#    #+#             */
/*   Updated: 2022/11/17 15:03:17 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "Bureaucrat.hpp"

class Form
{
	public:
	// Constructors
		Form(Form &cpy);
		Form(const std::string &newname, int sign_grade, int exec_grade);
	// Destructor
		virtual ~Form() = 0;
	// Assignment operator
		Form	&operator=(const Form &assign);

	// Accesors
		std::string	get_name()const;
		bool		get_is_signed() const;
		int			get_sign_grade() const;
		int			get_exec_grade() const;

	// Methods
		void			beSigned(Bureaucrat &tosign);
		void			execute(Bureaucrat const & executor) const;
		virtual void	to_execute() const = 0;

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
		class FormNotSigned : public std::exception
		{
			public:
				const char	*what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW
				{
					return ("Error: Form has not been Signed, cannot execute Form\n");
				}
		};

	private:
	// Constructors
		Form();
	// Attributes
		const std::string	_name;
		bool				_is_signed;
		const int			_sign_grade;
		const int			_exec_grade;
};
// Operator overload "<<"
	std::ostream	&operator<<(std::ostream &os, const Form &obj);
