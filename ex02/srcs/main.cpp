#include <iostream>
#include <string>

int	parsing(char **av)
{
	std::string	check;

	for (int i = 1; av[i] != NULL; ++i)
	{
		check.append(av[i]);
		if (check.find_first_not_of("0123456789 ") != std::string::npos)
		{
			std::cerr << "Error: inputs must only be POSITIVE INTEGERS\n";
			return (1);
		}
		check.clear();
	}
	return (0);
}

int	main(int ac, char **av)
{
	if (ac < 3)
		std::cerr << "Error: not enough arguments\n";
	if (parsing(av) == 0)
		return (0);
		// rest of the behavior here
	return (0);
}