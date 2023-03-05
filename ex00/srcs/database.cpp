#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <utility>

std::pair<std::string, float>	create_pair(std::string line)
{
	std::string						date;
	std::stringstream				ss;
	int								start;
	int								end;
	float							value;

	date = line.substr(0, line.find_first_of(','));

	start = line.find_first_of(',') + 1;
	end = line.find(',', start) - start;

	ss << line.substr(start, end);
	ss >> value;

	return (make_pair(date, value));
}

std::map<std::string, float>	setup_database(void)
{
	std::map<std::string, float>	db;
	std::ifstream					db_file("./srcs/BTC-db.csv");
	std::string						line;

	if (db_file.is_open())
	{
		db_file >> line;
		while (db_file)
		{
			db_file >> line;
			db.insert(create_pair(line));
		}
	}
	return (db);
}
