#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <limits>
#include <map>
#include "Date.hpp"

float	get_value(std::string line, Date date)
{
	float				ret = -1;
	std::string			tmp;
	std::stringstream	ss;

	if (line.find('|') + 1 == line.size() || line.find('|') == std::string::npos)
	{
		std::cerr << "Error: bad input => ";
		date.print_date(1);
		std::cerr << '\n';
		return (ret);
	}
	tmp = line.substr(line.find('|') + 1, line.size());
	if (tmp.empty() == true)
	{
		std::cerr << "Error: bad input => ";
		date.print_date(1);
		std::cerr << '\n';
		return (ret);
	}
	if (tmp.find('-') != std::string::npos)
	{
		std::cerr << "Error: not a positive number.\n";
		return (ret);
	}
	if (tmp.find_first_of("0123456789", 0) == std::string::npos || tmp.find_first_not_of("0123456789,. ", 0) != std::string::npos)
		std::cerr << "Error: value is not a number.\n";
	else
	{
		if (tmp.find_first_of('.') != tmp.find_last_of('.')
			&& tmp.find_first_of(',') != tmp.find_last_of(','))
			std::cerr << "Error: number contains multiple \'.\'\n";
		else
		{
			if (tmp.find(',') != std::string::npos)
				tmp.replace(tmp.find(','), 1, ".");
			ss << tmp;
			ss >> ret;
			if (ret > 1000)
				std::cerr << "Error: too large a number.\n";
		}
	}
	return (ret);
}

float	find_date(std::map<Date, float> db, Date date)
{
	if (db.find(date) != db.end())
		return (db.find(date)->second);
	if (date.get_year() == 0 && date.get_month() == 0 && date.get_day() == 0)
	{
		std::cerr << "Error: no date\n";
		return (-1);
	}
	if (date.get_month() == 0 || date.get_day() == 0)
	{
		std::cerr << "Error: ";
		date.print_date(1);
		std::cerr << " => not a date \n";
		return (-1);
	}
	db.insert(std::make_pair(date, 0));
	std::map<Date, float>::iterator	it = db.find(date);
	if (it == db.begin())
	{
		std::cerr << "Error: no data found for => ";
		date.print_date(1);
		std::cerr << "\n";
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
	bool		first = true;

	while (input_file.eof() == false)
	{
		getline(input_file, line, '\n');
		if (first == true)
		{
			first = false;
			if (line.compare("date | value") == 0)
				line.erase(0, line.size());
		}
		if (line.empty() == false)
		{
			date.set_date(line.substr(0, line.find_first_of(' ')));
			value = get_value(line, date);
			if (value >= 0 && value <= 1000)
			{
				bitcoin = find_date(db, date);
				if (bitcoin >= 0)
				{
					date.print_date(0);
					std::cout << " => " << value << " = ";
					std::cout.precision(8);
					std::cout << (value * bitcoin) << '\n';
				}
			}
		}
	}
}