#include <set>
#include <vector>
#include <iostream>
#include <sstream>

void	print_multiset(std::multiset<int> container)
{
	std::cout << "multiset : ";
	for (std::multiset<int>::iterator it = container.begin(); it != container.end(); ++it)
		std::cout << *it << ' ';
	std::cout << '\n';
}

void	fill_multiset(std::multiset<int> &container, char **av)
{
	std::vector<int>	tmp;
	int	value;

	for (int i = 1; av[i] != NULL; ++i)
	{
		std::stringstream	ss;
		ss << av[i];
		ss >> value;
		tmp.insert(tmp.end(), value);
	}
	for (std::vector<int>::iterator it = tmp.begin(); it != tmp.end(); ++it)
		container.insert(container.begin(), *it);
}

void	multiset_handling(char **av)
{
	std::multiset<int>	container;

	fill_multiset(container, av);
	print_multiset(container);
}