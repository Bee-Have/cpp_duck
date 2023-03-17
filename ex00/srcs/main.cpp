#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include "Date.hpp"

void	input_handling(std::ifstream &input_file, std::map<Date, float>db);
std::map<Date, float>	setup_database(void);

bool	file_is_good(std::ifstream &input_file)
{
	if (input_file.is_open() == false)
	{
		std::cerr << "Error: could not open input file\n";
		return (false);
	}
	if (input_file.peek() == std::ifstream::traits_type::eof())
	{
		std::cerr << "Error: input file is EMPTY\n";
		return (false);
	}
	return (true);
}

int	main(int ac, char **av)
{
	std::ifstream	input_file;
	int				return_status = 0;

	if (ac < 2)
	{
		std::cerr << "Error: no input file\n";
		return_status = 1;
	}
	else if (ac > 2)
	{
		std::cerr << "Error: multiple arguments\n";
		return_status = 1;
	}
	else
	{
		input_file.open(av[1], std::ifstream::in);
		if (file_is_good(input_file) == false)
			return_status = 1;
		else if (setup_database().empty() == true)
			return_status = 1;
		else
			input_handling(input_file, setup_database());
		input_file.close();
	}
	return (return_status);
}
