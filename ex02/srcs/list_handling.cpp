#include <list>
#include <iostream>
#include <sstream>
#include <sys/time.h>

void	print_sorted_list(std::list<int> container)
{
	std::cout << "After : ";

	if (container.size() > 10)
	{
		std::list<int>::iterator it = container.begin();
		for (int i = 0; i < 4; ++i)
		{
			std::cout << *it << ' ';
			++it;
		}
		std::cout << "[...]";
	}
	else
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
	gettimeofday(&start_time, NULL);
	container.sort();
	gettimeofday(&end_time, NULL);
	time = ((end_time.tv_sec - start_time.tv_sec) * 1000000L
		+ (end_time.tv_usec - start_time.tv_usec));
	print_sorted_list(container);
	std::cout << "Time to process a range of " << container.size()
		<< " elements with std::list<int>::sort() : " << time << " nanoseconds\n";
}