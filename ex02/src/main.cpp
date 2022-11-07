/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 01:57:07 by amarini-          #+#    #+#             */
/*   Updated: 2022/11/07 12:41:40 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#define GB "\033[1;32m"
#define YB "\033[1;33m"
#define END "\33[0m"

int	main(void)
{
	std::cout << GB << "Simple working tests :\n" << END;
	{
		Bureaucrat	Moss(1, "Moss");
		Form		*bush = new ShrubberyCreationForm("bush");
		Form		*robot = new RobotomyRequestForm("robot");
		Form		*pardon = new PresidentialPardonForm("Arthur Dent");
		
		std::cout << YB << "Shrubbery form :\n" << END;
		bush->beSigned(Moss);
		bush->execute(Moss);
		std::cout << YB << "Robotomize form :\n" << END;
		robot->beSigned(Moss);
		robot->execute(Moss);
		std::cout << YB << "Presidential pardon form :\n" << END;
		pardon->beSigned(Moss);
		pardon->execute(Moss);
		
		delete bush;
		delete robot;
		delete pardon;
	}

	std::cout << GB << "\nBad target in form creating constructor test :\n" << END;
	{
		std::cout << YB << "Bad Shrubbery creation form :\n" << END;
		try
		{
			ShrubberyCreationForm	test(NULL);
		}
		catch (ShrubberyCreationForm::BadTargetInit &exception)
		{
			std::cout << exception.what();
		}
		std::cout << YB << "Bad Robotomy creation form :\n" << END;
		try
		{
			RobotomyRequestForm	test(NULL);
		}
		catch (RobotomyRequestForm::BadTargetInit &exception)
		{
			std::cout << exception.what();
		}
		std::cout << YB << "Bad Presidential pardon creation form :\n" << END;
		try
		{
			PresidentialPardonForm	test(NULL);
		}
		catch (PresidentialPardonForm::BadTargetInit &exception)
		{
			std::cout << exception.what();
		}
	}

	std::cout << GB << "\nBad bureaucrat grades for signing/executing forms :\n" << END;
	{
		Bureaucrat			Moss(3, "Moss");
		Bureaucrat			Roy(150, "Roy");
		RobotomyRequestForm	robot("I am a robot");
		Form				*robot_pointer;
		
		robot_pointer = &robot;
		
		std::cout << YB << "Signing form with a low grade :\n" << END;
		try
		{
			robot_pointer->beSigned(Roy);
		}
		catch(Form::GradeTooLowException &exception)
		{
			std::cout << exception.what();
		}
		robot_pointer->beSigned(Moss);
		std::cout << YB << "Executing form with a low grade :\n" << END;
		try
		{
			robot_pointer->execute(Roy);
		}
		catch(Form::GradeTooLowException &exception)
		{
			std::cout << exception.what();
		}
	}

	std::cout << GB << "\nExecuting a form without signing it :\n" << END;
	{
		Bureaucrat				Jen(85, "Jen");
		PresidentialPardonForm	pardon("sorry(not sorry)");
		Form					&pardon_ref = pardon;
		
		try
		{
			pardon_ref.execute(Jen);
		}
		catch (Form::FormNotSigned &exception)
		{
			std::cout << exception.what();
		}
	}
	return (0);
}
