/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:16:10 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/14 15:29:25 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "Going to the mall is really my favorite thing !"
		<< "I love getting free samples, It's so easy !\n";
}

void	Harl::info(void)
{
	std::cout << "But. I've never had to pay for these before and i come here every day !\n";
}

void	Harl::warning(void)
{
	std::cout << "Do you make all of your loyal customers do this?"
		<< "I think I deserve it to be free, It's not like i'm poor !\n";
}

void	Harl::error(void)
{
	std::cout << "But, that doesn't apply to me ! I'm calling the cops.\n";
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
