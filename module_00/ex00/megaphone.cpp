/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 20:25:02 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/05 17:54:55 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char *av[])
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for(int i = 1; i < ac; ++i)
	{
		std::string cpy(av[i]);
		if (cpy.compare("") == 0)
			std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		else
			for (int icpy = 0; cpy[icpy] != '\0'; ++icpy)
				std::cout << (char)std::toupper(cpy[icpy]);
	}
	std::cout << std::endl;
}
