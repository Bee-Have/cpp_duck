/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:16:10 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/14 15:41:22 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << ""
		<< "Hello yes this is Harl-Karen. Can I help you ?\n";
}

void	Harl::info(void)
{
	std::cout << "Oh MY GOD ! Back of you PERV ! Do you know who I am ?!\n";
}

void	Harl::warning(void)
{
	std::cout << "Ew, Why would you say that ? It's discrimination against ME,"
		<< " I DARE you to say that again you PSYCHO!\n";
}

void	Harl::error(void)
{
	std::cout << "WHAT DID YOU SAY ?! I'm calling the cops !!\n";
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
	std::cout << "Harl does not have an entry for this" << std::endl;
}

Harl::Harl(void)
{}

Harl::~Harl(void)
{}
