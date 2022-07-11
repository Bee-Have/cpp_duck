/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 18:33:19 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/11 18:36:32 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cerr << "Usage: ./replace filename string_1 string_2\n";
		return (1);
	}
	return (0);
}
