#include <string>
#include <iostream>

void	rpn(std::string equation);

int	main(int ac, char **av)
{
	std::string	equation;

	if (ac < 2)
		std::cerr << "Error: no equation given\n";
	else if (ac > 2)
		std::cerr << "Error: can only give ONE equation at a time\n";
	else
	{
		equation.append(av[1]);
		if (equation.find_first_not_of("0123456789+-/* ", 0) != std::string::npos)
			std::cerr << "Error: equation must ONLY contain NUMBERS and \"+-/*\"\n";
		else
			rpn(equation);
	}
	return (0);
}