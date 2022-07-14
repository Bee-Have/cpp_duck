/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:15:16 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/14 16:04:32 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define CYAN "\033[1;36m"
#define END "\33[0m"

int	main(void)
{
	Harl	Karen;
	
	std::cout << RED << "Harl DEBUG : " << END;
	Karen.complain("DEBUG");
	std::cout << RED << "Harl INFO : " << END;
	Karen.complain("INFO");
	std::cout << RED << "Harl WARNING : " << END;
	Karen.complain("WARNING");
	std::cout << RED << "Harl ERROR : " << END;
	Karen.complain("WARNING");

	std::cout << "\nHello Harl\n";
	Karen.complain("DEBUG");
	std::cout << "That's good. So how are you today Karen, I mean Harl ?\n";
	Karen.complain("INFO");
	std::cout << "I mean... in all fairness, you used to be named Karen\n";
	Karen.complain("WARNING");
	std::cout << "Come oooooon, why do you have to always be like this ?\n";
	Karen.complain("ERROR");
	
	std::cout << "\nHarl ?\n";
	Karen.complain("DEBUG");
	std::cout << "Can you complain about something else then your defaults ?\n";
	Karen.complain("SOMETHING ELSE");
	std::cout << "Wow geez, you got such a foul mouth. Calm down.\n";
	Karen.complain("ERROR");

	std::cout << "\nAlright Harl, let's try to print your ERROR first :\n";
	Karen.complain("ERROR");
	std::cout << "Outch, but ok, next is your WARNING :\n";
	Karen.complain("WARNING");
	std::cout << "Yeah yeah whatever, INFO :\n";
	Karen.complain("INFO");
	std::cout << "WHAT ? I'm not a... *sigh*, whatever, DEBUG now :\n";
	Karen.complain("DEBUG");
	std::cout << "See, you can be nice sometimes.\n";
	Karen.complain("ERROR");
	std::cout << "I should have known...\n";
	
}
