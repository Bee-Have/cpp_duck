#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <utility>
#include "Date.hpp"

std::pair<Date, float>	create_pair(std::string line)
{
	Date				date;
	std::stringstream	ss;
	int					start;
	int					end;
	float				value;

	date.set_date(line.substr(0, line.find_first_of(',')));

	start = line.find_first_of(',') + 1;
	end = line.find(',', start) - start;

	ss << line.substr(start, end);
	ss >> value;

	return (std::make_pair(date, value));
}

std::map<Date, float>	setup_database(void)
{
	std::map<Date, float>	db;
	std::ifstream			db_file("./srcs/data.csv");
	std::string				line;

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
