/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 13:31:09 by amarini-          #+#    #+#             */
/*   Updated: 2022/11/20 14:17:25 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"
#include <iostream>
#include <cctype>

/**
-----------------------------| CONSTRUCTORS |-----------------------------------
**/
Converter::Converter(void): type("Undefined"), type_c('\0'), type_i(0), type_f(0.f), type_d(0.)
{}

Converter::Converter(Converter &cpy): type(cpy.type), type_c(cpy.type_c), type_i(cpy.type_i), type_f(cpy.type_f), type_d(cpy.type_d)
{}

/**
------------------------------| DESTRUCTOR |------------------------------------
**/
Converter::~Converter(void)
{}

/**
--------------------------| ASSIGNMENT OPERATOR |-------------------------------
**/
Converter	&Converter::operator=(Converter &assign)
{
	if (this != &assign)
	{
		type.assign(assign.type);
		type_c = assign.type_c;
		type_i = assign.type_i;
		type_f = assign.type_f;
		type_d = assign.type_d;
	}
	return (*this);
}

/**
--------------------------------| ACCESSORS |-----------------------------------
**/
char	Converter::get_type_char(void) const
{
	return (type_c);
}

int		Converter::get_type_int(void) const
{
	return (type_i);
}

float	Converter::get_type_float(void) const
{
	return (type_f);
}

double	Converter::get_type_double(void) const
{
	return (type_d);
}

/**
--------------------------------| METHODS |-------------------------------------
**/
void	Converter::print_values(void) const
{
	// change this since some convertions are impossible and therefore not displayable
	// will need conditions relating to type
	std::cout << "type: " << type << "\n";
	std::cout << "char: " << type_c << "\n";
	std::cout << "int: " << type_i << "\n";
	std::cout << "float: " << type_f << "\n";
	std::cout << "double: " << type_d << std::endl;
}

void	Converter::find_true_type(std::string &str)
{
	if (str.size() == 1 && std::isdigit(str[0]) == 0)
		type.assign("char");
	else if (((str[0] != '-' && str.find_first_not_of("0123456789", 0) == std::string::npos)
		|| (str[0] == '-' && str.find_first_not_of("0123456789", 1) == std::string::npos))
		&& ((str[0] != '-' && str.size() < 10) || (str[0] == '-' && str.size() < 11)))
		type.assign("int");
	else if ((str.compare("-inff") == 0 || str.compare("+inff") == 0 || str.compare("nanf") == 0
		|| ((((std::isdigit(str[0]) != 0 || str[0] == '.')
		&& str.find_first_not_of("0123456789.f", 0) == std::string::npos)
		|| (str[0] == '-' && str.find_first_not_of("0123456789.f", 1) == std::string::npos))
		&& str.find_first_of(".", 0) == str.find_last_of(".", str.size() -1)
		&& str.find_first_of("f", 0) == str.find_last_of("f", str.size() -1)))
		&& str[str.size() - 1] == 'f' && str.find(".", 0) != std::string::npos
		&& str.find_first_of("0123456789", 0) != std::string::npos)
		type.assign("float");
	else if (str.compare("-inf") == 0 || str.compare("+inf") == 0 || str.compare("nan") == 0
		|| ((((std::isdigit(str[0]) != 0 || str[0] == '.')
		&& str.find_first_not_of("0123456789.", 0) == std::string::npos)
		|| (str[0] == '-' && str.find_first_not_of("0123456789.", 1) == std::string::npos))
		&& str.find_first_of(".", 0) == str.find_last_of(".", str.size() -1)
		&& str.find(".", 0) != std::string::npos
		&& str.find_first_of("0123456789", 0) != std::string::npos))
		type.assign("double");
	else
		type.assign("undefined");
}

void	Converter::convert_to_all_types(void)
{
	// will do that later :D
}
