#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <utility>
#include "Date.hpp"

Date	create_date(std::string date)
{
	Date				new_date;
	std::string			tmp;
	std::stringstream	ss;
	int					value;

	tmp.assign(date.substr(0, date.find('-')));
	ss << tmp;
	ss >> value;
	new_date.set_year(value);
	ss.clear();

	date.assign(date.substr(date.find('-') + 1, date.size()));
	tmp.assign(date.substr(0, date.find('-')));
	ss << tmp;
	ss >> value;
	new_date.set_month(value);
	ss.clear();

	date.assign(date.substr(date.find('-') + 1, date.size()));
	ss << date;
	ss >> value;
	new_date.set_day(value);
	return (new_date);
}

std::pair<Date, float>	create_pair(std::string line)
{
	Date				date;
	std::stringstream	ss;
	int					start;
	int					end;
	float				value;

	date = create_date(line.substr(0, line.find_first_of(',')));

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
