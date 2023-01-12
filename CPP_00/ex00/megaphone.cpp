#include <iostream>

int		main(int ac, char **av)
{
	int i;
	int j;

	i = 0;
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else while (++i < ac)
	{
		j = 0;
		std::string	line(av[i]);
		while (av[i][j])
		{
			std::cout << static_cast<char>(std::toupper(line.at(j)));
			j++;
		}
	}
	std::cout << std::endl;
	return 0;	
}
