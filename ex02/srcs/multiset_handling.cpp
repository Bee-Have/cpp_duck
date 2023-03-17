#include <set>
#include <vector>
#include <iostream>
#include <sstream>
#include <sys/time.h>

void	time_multiset(std::vector<int> vect)
{
	std::multiset<int>	container;
	struct timeval	start_time;
	struct timeval	end_time;
	long			time;

	gettimeofday(&start_time, NULL);
	container.insert(vect.begin(), vect.end());
	gettimeofday(&end_time, NULL);
	time = ((end_time.tv_sec - start_time.tv_sec) * 1000000L
		+ (end_time.tv_usec - start_time.tv_usec));
	std::cout << "Time to process a range of " << container.size()
		<< " elements with std::multiset<int> : " << time << " nanoseconds\n";
}