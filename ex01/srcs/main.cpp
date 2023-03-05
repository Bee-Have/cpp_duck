#include <string>
#include <iostream>

int	main(int ac, char **av)
{
	if (ac < 2)
		std::cerr << "Error: no equation given\n";
	if (ac > 2)
		std::cerr << "Error: can only give ONE equation at a time\n";
	return (0);
}