#include <string>
#include <sstream>
#include <iostream>

class Date
{
	public:
		Date();
		Date(unsigned int year, unsigned int month, unsigned int day);
		Date(const Date &cpy);
		~Date();

		Date	&operator=(Date const &assign);

		void	print_date() const;
		bool	check_date(Date &cmp) const;

		int		get_year() const;
		void	set_year(int new_year);
		int		get_month() const;
		void	set_month(int new_month);
		int		get_day() const;
		void	set_day(int new_day);

	private:
		unsigned int	_year;
		unsigned int	_month;
		unsigned int	_day;
};

bool	operator==(Date const &first, Date const &second);
bool	operator!=(Date const &first, Date const &second);
bool	operator<(Date const &first, Date const &second);
bool	operator>(Date const &first, Date const &second);
bool	operator>=(Date const &first, Date const &second);
bool	operator<=(Date const &first, Date const &second);