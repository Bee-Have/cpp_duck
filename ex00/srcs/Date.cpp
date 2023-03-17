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

void	Date::print_date(void) const
{
	std::cout << _year << '-' << _month << '-' << _day;
}

bool	Date::check_date(Date &cmp) const
{
	if (cmp._year != _year || cmp._month != _month || cmp._day != _day)
		return (false);
	return (true);
}

int	Date::get_year(void) const
{
	return (_year);
}

void	Date::set_year(int new_year)
{
	_year = new_year;
}

int	Date::get_month(void) const
{
	return (_month);
}

void	Date::set_month(int new_month)
{
	_month = new_month;
}

int	Date::get_day(void) const
{
	return (_day);
}

void	Date::set_day(int new_day)
{
	_day = new_day;
}
