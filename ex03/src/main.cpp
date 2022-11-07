/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 01:57:07 by amarini-          #+#    #+#             */
/*   Updated: 2022/11/07 15:39:32 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Intern.hpp"
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
		Intern		thatguy;
		Bureaucrat	workerbee(2, "Bee");
		Form		*shrub;
		Form		*robot;
		Form		*pardon;

		std::cout << workerbee << '\n';

		std::cout << YB << "Intern creates forms of each type :\n" << END;
		shrub = thatguy.makeForm("shruberry request", "shrub");
		robot = thatguy.makeForm("robotomy request", "robot");
		pardon = thatguy.makeForm("pardon request", "pardon");

		std::cout << YB << "Bureaucrat Sign and Execute Shruberry form :\n" << END;
		shrub->beSigned(workerbee);
		shrub->execute(workerbee);

		std::cout << YB << "Bureaucrat Sign and Execute Robotomy form :\n" << END;
		robot->beSigned(workerbee);
		robot->execute(workerbee);

		std::cout << YB << "Bureaucrat Sign and Execute Presidential Pardon Robotomy form :\n" << END;
		pardon->beSigned(workerbee);
		pardon->execute(workerbee);
	}
	std::cout << GB << "\n42 subject required tests :\n" << END;
	{
		Bureaucrat	someguy(1, "Some Guy");
		Intern		someRandomIntern;
		Form*		rrf;

		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		rrf->beSigned(someguy);
		rrf->execute(someguy);
	}
	// test with intern trying to create form but bad input text
	std::cout << GB << "\nTest Intern creating a bad Form :\n" << END;
	{
		Bureaucrat	test(150, "test");
		Intern		thatguy;
		Form		*badform;

		badform = thatguy.makeForm("this is a bad form", "Random Target");
		if (badform != NULL)
			badform->beSigned(test);
	}
	return (0);
}
