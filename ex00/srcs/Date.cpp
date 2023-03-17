#include "Date.hpp"

Date::Date(void): _year(0), _month(0), _day(0)
{}

Date::Date(unsigned int year, unsigned int month, unsigned int day): _year(year), _month(month), _day(day)
{}

Date::Date(const Date &cpy): _year(cpy._year), _month(cpy._month), _day(cpy._day)
{}

Date::~Date(void)
{}

Date	&Date::operator=(Date const &assign)
{
	if (this != &assign)
	{
		_year = assign._year;
		_month = assign._month;
		_day = assign._day;
	}
	return (*this);
}

bool	operator==(Date const &first, Date const &second)
{
	if (first.get_year() == second.get_year()
		&& first.get_month() == second.get_month()
		&& first.get_day() == second.get_day())
		return (true);
	return (false);
}

bool	operator!=(Date const &first, Date const &second)
{
	return (!(first == second));
}

bool	operator<(Date const &first, Date const &second)
{
	if (first.get_year() < second.get_year())
		return (true);
	else if (first.get_year() == second.get_year())
	{
		if (first.get_month() < second.get_month())
			return (true);
		else if (first.get_month() == second.get_month()
			&& first.get_day() < second.get_day())
			return (true);
	}
	return (false);
}

bool	operator>(Date const &first, Date const &second)
{
	return (second < first);
}

bool	operator>=(Date const &first, Date const &second)
{
	return (!(first < second));
}

bool	operator<=(Date const &first, Date const &second)
{
	return (!(first > second));
}

void	Date::print_date(int error) const
{
	if (error == 0)
		std::cout << _year << '-' << std::setfill('0') << std::setw(2) << _month
			<< '-' << std::setfill('0') << std::setw(2) << _day;
	else
		std::cerr << _year << '-' << std::setfill('0') << std::setw(2) << _month
			<< '-' << std::setfill('0') << std::setw(2) << _day;
}

bool	Date::check_date(Date &cmp) const
{
	if (cmp._year != _year || cmp._month != _month || cmp._day != _day)
		return (false);
	return (true);
}

void	Date::set_date(std::string str_date)
{
	std::string			tmp;
	std::stringstream	ss;
	int					value;

	tmp.assign(str_date.substr(0, str_date.find('-')));
	if (tmp.empty() == true)
	{
		_year = 0;
		_month = 0;
		_day = 0;
		return ;
	}
	ss << tmp;
	ss >> value;
	_year = value;
	ss.clear();

	if (str_date.find('-') == std::string::npos)
	{
		_month = 0;
		_day = 0;
	}
	else
	{
		str_date.assign(str_date.substr(str_date.find('-') + 1, str_date.size()));
		tmp.assign(str_date.substr(0, str_date.find('-')));
		ss << tmp;
		ss >> value;
		_month = value;
		ss.clear();

		if (str_date.find('-') == std::string::npos)
			_day = 0;
		else
		{
			str_date.assign(str_date.substr(str_date.find('-') + 1, str_date.size()));
			ss << str_date;
			ss >> value;
			_day = value;
		}
	}
}

int	Date::get_year(void) const
{
	return (_year);
}

int	Date::get_month(void) const
{
	return (_month);
}

int	Date::get_day(void) const
{
	return (_day);
}
