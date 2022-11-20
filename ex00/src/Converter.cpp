/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 13:31:09 by amarini-          #+#    #+#             */
/*   Updated: 2022/11/20 18:02:16 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>
#include <limits>
#include <cctype>
#include <cmath>

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
std::string	Converter::get_type(void) const
{
	return (type);
}

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
	std::cout << "type: " << type << "\n";
	if (type.compare("undefined") == 0)
		std::cout << "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible";
	else if (type.compare("char") == 0)
		std::cout << "char: " << type_c << "\nint: " << type_i << "\nfloat: "
			<< std::fixed << std::setprecision(1) << type_f << "f\ndouble: " << std::setprecision(1) << type_d;
	else if (type.compare("int") == 0)
	{
		if (std::isprint(type_i) == 0)
			std::cout << "char: non displayable";
		else
			std::cout << "char: " << type_c;
		std::cout << "\nint: " << type_i << "\nfloat: "
			<< std::fixed << std::setprecision(1) << type_f << "f\ndouble: " << std::setprecision(1) << type_d;
	}
	else if (type.compare("float") == 0)
	{
		if (std::isnan(type_f) == true)
			std::cout << "char: impossible\nint: impossible";
		else
		{
			if (std::isprint(type_f) != 0)
				std::cout << "char: " << type_c;
			else
				std::cout << "char: non displayable";
			if (type_f < std::numeric_limits<int>::max() && type_f > std::numeric_limits<int>::min())
				std::cout << "\nint: " << type_i;
			else
				std::cout << "\nint: impossible";
		}
		std::cout << "\nfloat: " << std::fixed << std::setprecision(1) << type_f
			<< "f\ndouble: " << std::setprecision(1) << type_d;
	}
	else if (type.compare("double") == 0)
	{
		if (std::isnan(type_d) == true)
			std::cout << "char: impossible\nint: impossible";
		else
		{
			if (std::isprint(type_d) != 0)
				std::cout << "char:" << type_c;
			else
				std::cout << "char: non displayable";
			if (type_d < std::numeric_limits<int>::max() && type_d > std::numeric_limits<int>::min())
				std::cout << "\nint: " << type_i;
			else
				std::cout << "\nint: impossible";
		}
		if (type_d < std::numeric_limits<float>::max() && type_d > std::numeric_limits<float>::min())
			std::cout << "\nfloat: " << std::fixed << std::setprecision(1) << type_f << 'f';
		else
			std::cout << "\nfloat: impossible";
		std::cout << "\ndouble: " << std::fixed << std::setprecision(1) << type_d;
	}
	std::cout << std::endl;
}

void	Converter::find_true_type(std::string &str)
{
	std::stringstream	ss;
	ss << str;
	if (str.size() == 1 && std::isdigit(str[0]) == 0)
	{
		type.assign("char");
		ss >> type_c;
	}
	else if (((str[0] != '-' && str.find_first_not_of("0123456789", 0) == std::string::npos)
		|| (str[0] == '-' && str.find_first_not_of("0123456789", 1) == std::string::npos))
		&& ((str[0] != '-' && str.size() < 10) || (str[0] == '-' && str.size() < 11)))
	{
		type.assign("int");
		ss >> type_i;
	}
	else if ((str.compare("-inff") == 0 || str.compare("+inff") == 0 || str.compare("nanf") == 0
		|| ((((std::isdigit(str[0]) != 0 || str[0] == '.')
		&& str.find_first_not_of("0123456789.f", 0) == std::string::npos)
		|| (str[0] == '-' && str.find_first_not_of("0123456789.f", 1) == std::string::npos))
		&& str.find_first_of(".", 0) == str.find_last_of(".", str.size() -1)
		&& str.find_first_of("f", 0) == str.find_last_of("f", str.size() -1)))
		&& str[str.size() - 1] == 'f' && str.find(".", 0) != std::string::npos
		&& str.find_first_of("0123456789", 0) != std::string::npos)
	{
		type.assign("float");
		ss >> type_f;
	}
	else if (str.compare("-inf") == 0 || str.compare("+inf") == 0 || str.compare("nan") == 0
		|| ((((std::isdigit(str[0]) != 0 || str[0] == '.')
		&& str.find_first_not_of("0123456789.", 0) == std::string::npos)
		|| (str[0] == '-' && str.find_first_not_of("0123456789.", 1) == std::string::npos))
		&& str.find_first_of(".", 0) == str.find_last_of(".", str.size() -1)
		&& str.find(".", 0) != std::string::npos
		&& str.find_first_of("0123456789", 0) != std::string::npos))
	{
		type.assign("double");
		if (str.compare("nan") == 0)
			type_d = std::numeric_limits<double>::quiet_NaN();
		else if (str.compare("+inf") == 0 || str.compare("-inf") == 0)
		{
			type_d = std::numeric_limits<double>::infinity();
			if (str.compare("-inf") == 0)
				type_d = type_d * -1;
		}
		ss >> type_d;
	}
	else
		type.assign("undefined");
}

void	Converter::convert_to_all_types(void)
{
	if (type.compare("char") == 0)
	{
		type_i = static_cast<int>(type_c);
		type_f = static_cast<float>(type_c);
		type_d = static_cast<double>(type_c);
	}
	else if (type.compare("int") == 0)
	{
		if (std::isprint(type_i) != 0)
			type_c = static_cast<char>(type_i);
		type_f = static_cast<float>(type_i);
		type_d = static_cast<double>(type_i);
	}
	else if (type.compare("float") == 0)
	{
		if (std::isprint(type_f) != 0)
			type_c = static_cast<char>(type_f);
		if (type_f < std::numeric_limits<int>::max() && type_f > std::numeric_limits<int>::min())
			type_i = static_cast<int>(type_f);
		type_d = static_cast<double>(type_f);
	}
	else if (type.compare("double") == 0)
	{
		if (std::isprint(type_f) != 0)
			type_c = static_cast<char>(type_d);
		if (type_d < std::numeric_limits<int>::max() && type_d > std::numeric_limits<int>::min())
			type_i = static_cast<int>(type_d);
		if (type_d < std::numeric_limits<float>::max() && type_d > std::numeric_limits<float>::min())
			type_f = static_cast<float>(type_d);
	}
}
