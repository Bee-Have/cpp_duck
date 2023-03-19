#include <iostream>
#include <sstream>
#include <string>
#include <stack>

int	calculate(int first, int second, char sign)
{
	int	ret = -1;

	if (first == -1)
		ret = second * -1;
	else if (sign == '+')
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
				if (container.size() == 0 || (container.size() == 1 && tmp != '-'))
				{
					std::cerr << "Error: incomplete equation\n";
					return ;
				}
				second = container.top();
				container.pop();
				if (container.size() == 0 && tmp == '-')
					container.push(calculate(-1, second, tmp));
				else
				{
					top = container.top();
					container.pop();
					if (tmp == '/' && second == 0)
					{
						std::cerr << "Error: cannot divide by 0\n";
						return ;
					}
					container.push(calculate(top, second, tmp));
				}
			}
		}
	}
	if (container.size() > 1)
		std::cerr << "Error: incomplete equation\n";
	else
		std::cout << container.top() << '\n';
}