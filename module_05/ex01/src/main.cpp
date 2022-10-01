/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 01:57:07 by amarini-          #+#    #+#             */
/*   Updated: 2022/10/01 02:10:31 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

#define GB "\033[1;32m"
#define YB "\033[1;33m"
#define END "\33[0m"

int	main()
{
	std::cout << GB << "Simple working test :\n" << END;
	{
		Bureaucrat	Moss(10, "Moss");
		Form		F0("F0", 10, 10);

		std::cout << Moss << '\n';
		std::cout << YB << "Bureaucrat signs the form :\n" << END;
		F0.beSigned(Moss);
		std::cout << YB << "Bureaucrat attempt to sign again, nothing happens\n" << END;
		F0.beSigned(Moss);
	}

	std::cout << GB << "\nError tests with form :\n" << END;
	{
		std::cout  << YB << "Trying to create a form with bad signing grade :\n" << END;
		try
		{
			Form	bad_form("bad form", 0, 4);
		}
		catch (Form::GradeTooHighException &exception)
		{
			std::cout << exception.what();
		}
		std::cout << YB << "Trying to create a form with bad execution grade :\n" << END;
		try
		{
			Form	bad_form("bad form", 140, 151);
		}
		catch (Form::GradeTooLowException &exception)
		{
			std::cout << exception.what();
		}
	}

	std::cout << GB << "\nError test with bureaucrat having a grade too low :\n" << END;
	{
		Bureaucrat	Jen(42, "Jen");
		Form		good_form("good form", 40, 30);

		std::cout << Jen;
		std::cout << YB << "\nTrying to sign form with wrong bureaucrat grade :\n" << END;
		try
		{
			good_form.beSigned(Jen);
		}
		catch (Form::GradeTooLowException &exception)
		{
			std::cout << exception.what();
		}
		std::cout << YB << "Incrementing bureaucrat grade to sign form :\n" << END;
		Jen.increment_grade();
		Jen.increment_grade();
		std::cout << Jen;
		std::cout << YB << "\nSigning document now that buregrade is high enough :\n" << END;
		good_form.beSigned(Jen);
	}
	return (0);
}
