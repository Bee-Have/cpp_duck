/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 01:57:07 by amarini-          #+#    #+#             */
/*   Updated: 2022/10/01 01:52:29 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

#define GB "\033[1;32m"
#define YB "\033[1;33m"
#define END "\33[0m"

int	main()
{
	std::cout << GB << "Simple working test :\n" << END;
	{
		std::cout << YB << "Bureaucrat Moss(10, Moss)\n" << END;
		std::cout << YB << "Bureaucrat Jen(Moss)\n" << END;
		Bureaucrat	Moss(10, "Moss");
		Bureaucrat	Jen(Moss);

		std::cout << Moss << "\n";
		std::cout << Jen << "\n";

		std::cout << YB << "Grade change test :\n" << END;
		Moss.decrement_grade();
		Jen.increment_grade();
		std::cout << Moss << "\n";
		std::cout << Jen << "\n";
	}

	std::cout << GB << "\nBad Constructor tests :\n" << END;
	{
		std::cout << YB << "Test with default constructor :\n" << END;
		try
		{
			Bureaucrat	Moss;
		}
		catch (Bureaucrat::GradeTooLowException exception)
		{
			std::cout << exception.what();
		}
		std::cout << YB << "Test with int Constructor < 1 :\n" << END;
		try
		{
			Bureaucrat	Roy(-19);
		}
		catch (Bureaucrat::GradeTooHighException exception)
		{
			std::cout << exception.what();
		}
		std::cout << YB << "Test with (int, name) Constructor > 150 :\n" << END;
		try
		{
			Bureaucrat Jen(180, "Jen");
		}
		catch (Bureaucrat::GradeTooLowException exception)
		{
			std::cout << exception.what();
		}
	}

	std::cout << GB << "\nTest incrementing/decrementing maximum grades :\n" << END;
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
