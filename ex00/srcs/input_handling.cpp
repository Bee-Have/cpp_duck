#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>

std::string	get_line(std::ifstream &input_file)
{
	std::string	line;
	char		tmp;
	while (input_file)
	{
		tmp = input_file.get();
		if (tmp == '\n' || tmp == EOF)
			return (line);
		else
			line.push_back(tmp);
	}
	return (line);
}

float	get_value(std::string line)
{
	float				ret = -1;
	std::string			tmp;
	std::stringstream	ss;

	tmp = line.substr(line.find('|', 0) + 2, line.size());
	if (tmp.find_first_not_of("0123456789.", 0) != std::string::npos)
		std::cerr << "Error: value must be a NUMBER between 0 and 1000\n";
	else
	{
		ss << tmp;
		ss >> ret;
		if (ret > 1000)
			std::cerr << "Error: value must be a NUMBER between 0 and 1000\n";
	}
	return (ret);
}

void	input_handling(std::ifstream &input_file, std::map<std::string, float>db)
{
	std::string	line;
	std::string	date;
	float		nbr;

	(void)db;
	line = get_line(input_file);
	while (input_file)
	{
		line = get_line(input_file);
		if (line.empty() == false)
		{
			date = line.substr(0, line.find_first_of(' '));
			if (db.find(date) != db.end())
			{
				nbr = get_value(line);
				if (nbr >= 0 && nbr <= 1000)
				{
					std::cout << date << " => " << nbr << " = ";
					std::cout << (nbr * db.find(date)->second) << '\n';
				}
			}
			else
				std::cout << "Error: could not find " << date << " in database\n";
		}
	}
}