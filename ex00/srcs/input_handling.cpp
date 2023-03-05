#include <iostream>
#include <fstream>
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

void	input_handling(std::ifstream &input_file, std::map<std::string, float>db)
{
	std::string	line;
	std::string	date;

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
				std::cout << "found :" << date << '\n';
			}
			else
				std::cout << "Error: could not find " << date << " in database\n";
		}
	}
}