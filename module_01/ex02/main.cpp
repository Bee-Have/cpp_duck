/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:45:21 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/16 22:51:47 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string	*stringPTR = &brain;
	std::string	&stringREF = brain;

	std::cout << "brain is a std::string\n";
	std::cout << "stringPTR is a pointer to brain\n";
	std::cout << "stringREF is a reference to brain\n";
	// print memory address of brain
	std::cout << "string memory address     : " << &brain << '\n';
	// print memory address held by stringPTR
	std::cout << "pointer memory address    : " << stringPTR << '\n';
	// print memory address held by stringREF
	std::cout << "reference memory address  : " << &stringREF << '\n';

	// print value of brain
	std::cout << "\nstd::string brain :" << brain << '\n';
	// print value of stringPTR
	std::cout << "pointer to brain  :" << *stringPTR << '\n';
	// print value of stringREF
	std::cout << "rerence to brain  :" << stringREF << std::endl;
}