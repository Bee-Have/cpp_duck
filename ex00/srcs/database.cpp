#include <iostream>
#include <fstream>
#include <string>
#include <map>

std::map<std::string, float>	setup_database(void)
{
	std::map<std::string, float>	db;
	std::ifstream					db_file("../database/BTC-db.csv");

	if (db_file.is_open() == true)
		std::cout << "sucess, file is indeed open\n";
	
	return (db);
}