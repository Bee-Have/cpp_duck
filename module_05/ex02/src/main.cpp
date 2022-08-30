/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 01:57:07 by amarini-          #+#    #+#             */
/*   Updated: 2022/08/30 04:48:30 by amarini-         ###   ########.fr       */
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
	{
		Bureaucrat	Moss(1, "Moss");
		Form		*bush = new ShrubberyCreationForm("bush");
		Form		*robot = new RobotomyRequestForm("robot");
		Form		*pardon = new PresidentialPardonForm("Arthud Dent");
		
		bush->beSigned(Moss);
		bush->execute(Moss);
		std::cout << "\n";
		robot->beSigned(Moss);
		robot->execute(Moss);
		std::cout << "\n";
		pardon->beSigned(Moss);
		pardon->execute(Moss);
	}
	return (0);
}
