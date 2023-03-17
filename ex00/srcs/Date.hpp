#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>

class Date
{
	public:
		Date();
		Date(unsigned int year, unsigned int month, unsigned int day);
		Date(const Date &cpy);
		~Date();

		Date	&operator=(Date const &assign);

		void	print_date(int error) const;
		bool	check_date(Date &cmp) const;
		void	set_date(std::string date);

		int		get_year() const;
		int		get_month() const;
		int		get_day() const;

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