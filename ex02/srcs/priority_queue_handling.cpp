#include <queue>
#include <vector>
#include <iostream>
#include <sstream>
#include <sys/time.h>

void	time_priority_queue(std::vector<int> vect)
{
	struct timeval	start_time;
	struct timeval	end_time;
	long			time;

	gettimeofday(&start_time, NULL);
	std::priority_queue<int>	container(vect.begin(), vect.end());
	gettimeofday(&end_time, NULL);
	time = ((end_time.tv_sec - start_time.tv_sec) * 1000000L
		+ (end_time.tv_usec - start_time.tv_usec));
	std::cout << "Time to process a range of " << container.size()
		<< " elements with std::priority_queue<int> : " << time << " nanoseconds\n";
}