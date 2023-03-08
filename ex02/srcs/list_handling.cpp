#include <list>
#include <iostream>
#include <sstream>
#include <limits>

void	print_list(std::list<int> container)
{
	for (std::list<int>::iterator it = container.begin(); it != container.end(); ++it)
		std::cout << *it << " ";
	std::cout << '\n';
}

int	fill_list(std::list<int> &container, char **av)
{
	long				tmp;

	for (int i = 1; av[i] != NULL; ++i)
	{
		std::stringstream	ss;
		ss << av[i];
		ss >> tmp;
		if (tmp > std::numeric_limits<int>::max())
		{
			std::cerr << "Error: values must be POSITIVE INTEGERS\n";
			return (1);
		}
		container.insert(container.end(), tmp);
	}
	return (0);
}

void	list_handling(char **av)
{
	std::list<int>	container;

	if (fill_list(container, av) == 1)
		return ;
	print_list(container);
	container.sort();
	print_list(container);
}