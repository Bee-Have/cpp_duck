#include <iostream>
#include <string>
#include <map>

std::map<std::string, float>	setup_database(void);

int	main(void)
{
	std::map<std::string, float> db = setup_database();
	return (0);
}
