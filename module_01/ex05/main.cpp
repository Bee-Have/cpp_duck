/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:15:16 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/14 16:13:21 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
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
	std::cout << RED << "Harl bad argument : " << END;
	Karen.complain("BAD");

	std::cout << GREEN << "\nHello Harl\n" << END;
	Karen.complain("DEBUG");
	std::cout << GREEN << "That's good. So how are you today Karen, I mean Harl ?\n" << END;
	Karen.complain("INFO");
	std::cout << GREEN << "I mean... in all fairness, you used to be named Karen\n" << END;
	Karen.complain("WARNING");
	std::cout << GREEN << "Come oooooon, why do you have to always be like this ?\n" << END;
	Karen.complain("ERROR");
	
	std::cout << GREEN << "\nHarl ?\n" << END;
	Karen.complain("DEBUG");
	std::cout << GREEN << "Can you complain about something else then your defaults ?\n" << END;
	Karen.complain("SOMETHING ELSE");
	std::cout << GREEN << "Wow geez, you got such a foul mouth. Calm down.\n" << END;
	Karen.complain("ERROR");

	std::cout << GREEN << "\nAlright Harl, let's try to print your ERROR first :\n" << END;
	Karen.complain("ERROR");
	std::cout << GREEN << "Outch, but ok, next is your WARNING :\n" << END;
	Karen.complain("WARNING");
	std::cout << GREEN << "Yeah yeah whatever, INFO :\n" << END;
	Karen.complain("INFO");
	std::cout << GREEN << "WHAT ? I'm not a... *sigh*, whatever, DEBUG now :\n" << END;
	Karen.complain("DEBUG");
	std::cout << GREEN << "See, you can be nice sometimes.\n" << END;
	Karen.complain("ERROR");
	std::cout << GREEN << "I should have known...\n" << END;
}
