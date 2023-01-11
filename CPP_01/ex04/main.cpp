
#include <string>
#include <iostream>
#include <fstream>


static void	replace(std::string& line, char *s1, char *s2)
{
	size_t start;
	size_t length;
	
	start = line.find(s1);
	length = strlen(s1);
	while (start != std::string::npos) //npos == "until the end of the string"
	{
		line.replace(start, length, s2);
		start = line.find(s1, start);
	}
}


int main(int ac, char **av)
{
	std::ifstream	file(av[1]);
	std::string 	line;
	char	*s1;
	char	*s2;
	s1 = strdup(av[2]);
	s2 = strdup(av[3]);

	if (ac != 4 || av[1][0] == '\0' || av[2][0] == '\0' || av[3][0] == '\0')
		std::cout << "synthax error: no empty argument or please use => file s1 s2\n";
	if (!file.is_open())
	{
		std::cout << "Coulnd't open the input file" << std::endl;
		return (-1);
	}
	std::string	file_name = (std::string)av[1] + ".replace";
	std::ofstream	out(file_name);
	if(!out.is_open())
	{
		std::cout << "Coulnd't open the output file" << std::endl;
		return (-1);
	}
	while (getline(file, line))
	{
		replace(line, s1, s2);
		out << line << std::endl;
	}
	//free(s1);
	//free(s2);
	out.close();
	file.close();
	return (0);
}