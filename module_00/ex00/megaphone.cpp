/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 20:25:02 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/03 23:03:16 by amarini-         ###   ########.fr       */
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
		for (int icpy = 0; icpy < cpy.size(); ++icpy)
			std::cout << (char)toupper(cpy[icpy]);
	}
	std::cout << std::endl;
}
