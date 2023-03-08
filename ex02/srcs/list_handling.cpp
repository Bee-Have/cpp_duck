#include <list>
#include <iostream>
#include <sstream>
#include <sys/time.h>

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
	struct timeval	start_time;
	struct timeval	end_time;
	long			time;

	fill_list(container, av);
	print_list(container);
	gettimeofday(&start_time, NULL);
	container.sort();
	gettimeofday(&end_time, NULL);
	time = ((end_time.tv_sec - start_time.tv_sec) * 1000000L
		+ (end_time.tv_usec - start_time.tv_usec));
	std::cout << "TIME LIST : " << time << " nanoseconds\n";
	print_list(container);
}