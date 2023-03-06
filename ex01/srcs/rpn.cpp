#include <iostream>
#include <sstream>
#include <string>
#include <stack>

int	calculate(int first, int second, char sign)
{
	int	ret = -1;

	if (sign == '+')
		ret = first + second;
	else if (sign == '-')
		ret = first - second;
	else if (sign == '/')
		ret = first / second;
	else if (sign == '*')
		ret = first * second;
	return (ret);
}

void	rpn(std::string equation)
{
	std::stack<int>		container;
	char				tmp;
	int					top;
	int					second;

	for (size_t i = 0; i < equation.size(); ++i)
	{
		tmp = equation[i];
		if (tmp != ' ')
		{
			if (tmp != '+' && tmp != '-' && tmp != '/' && tmp != '*')
			{
				std::stringstream	ss;
				ss << tmp;
				ss >> top;
				container.push(top);
			}
			else
			{
				second = container.top();
				container.pop();
				top = container.top();
				container.pop();
				container.push(calculate(top, second, tmp));
			}
		}
	}
	std::cout << container.top() << '\n';
}