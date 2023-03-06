#include <iostream>
#include <vector>

int	fill_vector(char **av);

int	main(int ac, char **av)
{
	if (ac < 3)
		std::cerr << "Error: not enough arguments\n";
	return (0);
}