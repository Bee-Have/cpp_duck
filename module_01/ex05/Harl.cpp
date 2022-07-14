/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:16:10 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/14 16:13:38 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

#define YELLOW "\033[1;33m"
#define RED "\033[1;31m"
#define END "\33[0m"

void	Harl::debug(void)
{
	std::cout << YELLOW << "Hello yes this is Harl. Can I help you ?\n" << END;
}

void	Harl::info(void)
{
	std::cout << YELLOW << "Oh MY GOD ! Back of you PERV ! Do you know who I am ?!\n" << END;
}

void	Harl::warning(void)
{
	std::cout << YELLOW << "Ew, Why would you say that ? It's discrimination"
		" against ME, I DARE you to say that again you PSYCHO!\n" << END;
}

void	Harl::error(void)
{
	std::cout << YELLOW << "WHAT DID YOU SAY ?! I'm calling the cops !!\n" << END;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*responce[4])() ;
	char	cases[4][8] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	responce[0] = &Harl::debug;
	responce[1] = &Harl::info;
	responce[2] = &Harl::warning;
	responce[3] = &Harl::error;
	for (int i = 0; i < 4; ++i)
	{
		if (level.compare(cases[i]) == 0)
		{
			((this->*responce[i])());
			return ;
		}
	}
	std::cout << RED << "F*CK OFF ! I WON'T SAY THAT ! THAT'S RUDE !" << std::endl << END;
}

Harl::Harl(void)
{}

Harl::~Harl(void)
{}
