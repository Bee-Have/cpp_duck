#include <set>
#include <vector>
#include <iostream>
#include <sstream>
#include <sys/time.h>

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

void	time_multiset(std::vector<int> tmp, std::multiset<int> &container)
{
	struct timeval	start_time;
	struct timeval	end_time;
	long			time;

	gettimeofday(&start_time, NULL);
	container.insert(tmp.begin(), tmp.end());
	gettimeofday(&end_time, NULL);
	time = ((end_time.tv_sec - start_time.tv_sec) * 1000000L
		+ (end_time.tv_usec - start_time.tv_usec));
	std::cout << "Time to process a range of " << container.size()
		<< " elements with std::multiset<int>::insert(begin(), end()) : " << time << " nanoseconds\n";
}

void	multiset_handling(char **av)
{
	std::multiset<int>	container;
	std::vector<int>	tmp;

	tmp = fill_vector(av);
	time_multiset(tmp, container);
}