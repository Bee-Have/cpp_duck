#include <list>
#include <iostream>
#include <sstream>

void	print_list(std::list<int> container)
{
	std::cout << "list : ";
	for (std::list<int>::iterator it = container.begin(); it != container.end(); ++it)
		std::cout << *it << ' ';
	std::cout << '\n';
}

void	fill_list(std::list<int> &container, char **av)
{
	int	tmp;

	for (int i = 1; av[i] != NULL; ++i)
	{
		std::stringstream	ss;
		ss << av[i];
		ss >> tmp;
		container.insert(container.end(), tmp);
	}
}

void	list_handling(char **av)
{
	std::list<int>	container;

	fill_list(container, av);
	print_list(container);
	container.sort();
	print_list(container);
}