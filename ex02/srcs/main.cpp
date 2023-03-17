#include <iostream>
#include <sstream>
#include <limits>
#include <string>
#include <vector>

void	multiset_handling(std::vector<int> vect);

std::vector<int>	fill_vector(char **av)
{
	std::vector<int>	container;
	int	value;

	for (int i = 1; av[i] != NULL; ++i)
	{
		std::stringstream	ss;
		ss << av[i];
		ss >> value;
		container.insert(container.end(), value);
	}
	return (container);
}

int	parsing(char **av)
{
	std::string	check;
	long		tmp;

	for (int i = 1; av[i] != NULL; ++i)
	{
		std::stringstream	ss;
		check.append(av[i]);
		if (check.find_first_not_of("0123456789 ") != std::string::npos)
		{
			std::cerr << "Error: values must be POSITIVE INTEGERS\n";
			return (1);
		}
		ss << check;
		ss >> tmp;
		if (tmp > std::numeric_limits<int>::max())
		{
			std::cerr << "Error: values must be POSITIVE INTEGERS\n";
			return (1);
		}
		check.clear();
	}
	return (0);
}

int	main(int ac, char **av)
{
	std::vector<int>	vect;

	if (ac < 3)
		std::cerr << "Error: not enough arguments\n";
	else if (parsing(av) == 0)
	{
		std::cout << "Before: ";
		if (ac > 11)
			std::cout << av[1] << ' ' << av[2] << ' ' << av[3] << ' ' << av[4] << " [...]";
		else
			for (int i = 1; av[i] != NULL; ++i)
				std::cout << av[i] << ' ';
		std::cout << '\n';
		vect = fill_vector(av);
		multiset_handling(vect);
	}
	return (0);
}