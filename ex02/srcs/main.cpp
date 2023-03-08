#include <iostream>
#include <sstream>
#include <limits>
#include <string>

void	multiset_handling(char **av);
void	list_handling(char **av);

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
	if (ac < 3)
		std::cerr << "Error: not enough arguments\n";
	if (parsing(av) == 0)
	{
		list_handling(av);
		multiset_handling(av);
	}
	return (0);
}