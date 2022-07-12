/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 18:33:19 by amarini-          #+#    #+#             */
/*   Updated: 2022/07/12 20:23:00 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

int	main(int ac, char *av[])
{
	std::ifstream	infile;
	std::ofstream	outfile;
	if (ac != 4)
	{
		std::cerr << "Usage: ./replace [FILE] to_replace new_string\n";
		return (1);
	}
	if (av[2][0] == '\0')
	{
		std::cerr << "String to replace cannot be empty\n";
		return (1);
	}
	infile.open (av[1]);
	if (infile.is_open())
	{
		std::string	newName;
		newName.assign(av[1]);
		newName.append(".replace");
		outfile.open (newName.c_str());
		if (outfile.is_open())
		{
			std::string	content;
			std::string	line;
			while (std::getline (infile, line))
			{
				if (content.empty() == 0)
					content.append("\n");
				content.append(line);
			}
			if (line.empty() == 1)
				content.append("\n");
			std::string	needle(av[2]);
			std::string	newNeedle(av[3]);
			std::size_t	found = 0;
			while ((found = content.find(needle, found)) != std::string::npos)
			{
				content.erase(found, needle.size());
				content.insert(found, newNeedle);
				found += newNeedle.size();
			}
			outfile << content;
			infile.close();
			outfile.close();
		}
		else
			std::cerr << "could not open : [" << newName << "]\n";
	}
	else
		std::cerr << '[' << av[1] << "] can't be opened\n";
	return (0);
}
