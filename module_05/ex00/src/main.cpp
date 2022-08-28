/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 01:57:07 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/28 03:21:22 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int	main()
{
	std::cout << "Simple tests :\n";
	{
		std::cout << "Bureaucrat Moss(10, Moss)\n";
		std::cout << "Bureaucrat Jen(Moss)\n";
		Bureaucrat	Moss(10, "Moss");
		Bureaucrat	Jen(Moss);

		std::cout << Moss << "\n";
		std::cout << Jen << "\n";

		std::cout << "Grade change test :\n";
		Moss.decrement_grade();
		Jen.increment_grade();
		std::cout << Moss << "\n";
		std::cout << Jen << "\n";
	}

	std::cout << "\nBad Constructor tests :\n";
	{
		std::cout << "Test with default constructor :\n";
		try
		{
			Bureaucrat	Moss;
		}
		catch (Bureaucrat::GradeTooLowException exception)
		{
			std::cout << exception.what();
		}
		std::cout << "Test with int Constructor < 1 :\n";
		try
		{
			Bureaucrat	Roy(-19);
		}
		catch (Bureaucrat::GradeTooHighException exception)
		{
			std::cout << exception.what();
		}
		std::cout << "Test with (int, name) Constructor > 150 :\n";
		try
		{
			Bureaucrat Jen(180, "Jen");
		}
		catch (Bureaucrat::GradeTooLowException exception)
		{
			std::cout << exception.what();
		}
	}

	std::cout << "\nTest incrementing/decrementing maximum grades :\n";
	{
		Bureaucrat	Jen(1, "Jen");
		Bureaucrat	Roy(150, "Roy");

		std::cout << Jen << "\n";
		std::cout << Roy << "\n";

		try
		{
			Jen.decrement_grade();
		}
		catch (Bureaucrat::GradeTooHighException exception)
		{
			std::cout << exception.what();
		}
		try
		{
			Roy.increment_grade();
		}
		catch (Bureaucrat::GradeTooLowException exception)
		{
			std::cout << exception.what();
		}
	}
	return (0);
}
