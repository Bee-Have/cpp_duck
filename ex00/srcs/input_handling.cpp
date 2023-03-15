#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>

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

void	input_handling(std::ifstream &input_file, std::map<std::string, float>db)
{
	std::string	line;
	std::string	date;
	float		nbr;

	while (input_file.eof() == false)
	{
		getline(input_file, line, '\n');
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