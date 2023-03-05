#include <iostream>
#include <fstream>
#include <string>
#include <map>

void	input_handling(std::ifstream &input_file, std::map<std::string, float>db);
std::map<std::string, float>	setup_database(void);

int	main(int ac, char **av)
{
	std::ifstream					input_file;

	if (ac < 2)
		std::cerr << "Error: no input file\n";
	else if (ac > 2)
		std::cerr << "Error: multiple arguments\n";
	else
	{
		input_file.open(av[1], std::ifstream::in);
		if (input_file.is_open() == false)
			std::cerr << "Error: could not open input file\n";
		else
			input_handling(input_file, setup_database());
	}
	return (0);
}
