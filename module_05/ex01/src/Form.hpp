/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 03:51:01 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/28 04:10:32 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "Bureaucrat.hpp"

class Form
{
	public:
	// Constructors
		Form();
		Form(Form &cpy);
	// Destructor
		~Form();
	// Assignment operator
		Form	&operator=(const Form &assign);

	// Accesors
		std::string	get_name()const;
		bool		get_is_signed() const;
		int			get_sign_grade() const;
		int			get_exec_grade() const;

	// Methods
		void	beSigned(Bureaucrat &tosign);

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
		const std::string	_name;
		bool				_is_signed;
		const int			_sign_grade;
		const int			_exec_grade;
};
// Operator overload "<<"
	std::ostream	&operator<<(std::ostream &os, const Form &obj);
