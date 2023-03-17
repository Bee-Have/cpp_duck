#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <limits>
#include <map>
#include "Date.hpp"

float	get_value(std::string line)
{
	float				ret = -1;
	std::string			tmp;
	std::stringstream	ss;

	if (line.find('|') + 1 == line.size() || line.find('|') == std::string::npos)
	{
		std::cerr << "Error: value is empty\n";
		return (ret);
	}
	tmp = line.substr(line.find('|') + 1, line.size());
	if (tmp.empty() == true)
	{
		std::cerr << "Error: value is empty\n";
		return (ret);
	}
	if (tmp.find_first_of("0123456789", 0) == std::string::npos || tmp.find_first_not_of("0123456789. ", 0) != std::string::npos)
		std::cerr << "Error: value must be a NUMBER between 0 and 1000\n";
	else
	{
		if (tmp.find_first_of('.') != tmp.find_last_of('.'))
			std::cerr << "Error: value contains multiple \'.\'\n";
		else
		{
			ss << tmp;
			ss >> ret;
			if (ret > 1000)
				std::cerr << "Error: value must be a NUMBER between 0 and 1000\n";
		}
	}
	return (ret);
}

float	find_date(std::map<Date, float> db, Date date)
{
	if (db.find(date) != db.end())
		return (db.find(date)->second);

	db.insert(std::make_pair(date, 0));
	std::map<Date, float>::iterator	it = db.find(date);
	if (it == db.begin())
	{
		std::cerr << "Error: no data found for \"";
		date.print_date(1);
		std::cerr << "\"\n";
		db.erase(it);
		return (-1);
	}
	--it;
	return ((*it).second);
}

void	input_handling(std::ifstream &input_file, std::map<Date, float> db)
{
	std::string	line;
	Date		date;
	float		bitcoin;
	float		value;

	getline(input_file, line, '\n');
	if (line.compare("date | value") != 0)
	{
		date.set_date(line.substr(0, line.find_first_of(' ')));
		bitcoin = find_date(db, date);
		value = get_value(line);
		if (bitcoin >= 0 && value >= 0 && value <= 1000)
		{
			date.print_date(0);
			std::cout << " => " << value << " = ";
			std::cout << (value * bitcoin) << '\n';
		}
	}
	while (input_file.eof() == false)
	{
		getline(input_file, line, '\n');
		if (line.empty() == false)
		{
			date.set_date(line.substr(0, line.find_first_of(' ')));
			bitcoin = find_date(db, date);
			value = get_value(line);
			if (bitcoin >= 0 && value >= 0 && value <= 1000)
			{
				date.print_date(0);
				if (value * bitcoin > 1000)
					std::cout.precision(8);
				else
					std::cout.precision(5);
				std::cout << " => " << value << " = ";
				std::cout << (value * bitcoin) << '\n';
			}
		}
	}
}