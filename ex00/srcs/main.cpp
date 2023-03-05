#include <iostream>
#include <fstream>
#include <string>
#include <map>

std::map<std::string, float>	setup_database(void);

int	main(int ac, char **av)
{
	std::map<std::string, float>	db = setup_database();
	std::ifstream					input_file;

	if (ac < 2)
		std::cerr << "Error: no input file\n";
	if (ac > 2)
		std::cerr << "Error: multiple arguments\n";
	input_file.open(av[1], std::ifstream::in);
	if (input_file.is_open() == false)
		std::cerr << "Error: could not open input file\n";
	return (0);
}
