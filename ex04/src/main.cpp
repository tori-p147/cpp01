#include <replacer.hpp>

bool	fileExist(char *filename)
{
	std::fstream filein(filename);
	return (filein.is_open());
}

int	main(int argc, char **argv)
{
	char	*filename;
	char	*s1;
	char	*s2;
	int		counter;
	size_t	pos;
	size_t	len;

	if (argc != 4)
	{
		std::cerr << "Invalid argumants!" << std::endl;
		return (1);
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	std::ifstream filein(filename);
	if (!fileExist(filename))
	{
		std::cerr << "File not exist!" << std::endl;
		return (1);
	}
	pos = 0;
	len = std::strlen(s1);
	std::string filenameStr = "";
	filenameStr.append(filename).append(".replace");
	std::ofstream fileout(filenameStr);
	std::string line = "";
	while (std::getline(filein, line))
	{
		std::size_t found = line.find(s1);
		if (found != std::string::npos)
		{
			std::string front = line.substr(0, found);
			std::string rest = line.substr(found + len, line.length());
			front.append(s2).append(rest);
			fileout << front;
		}
		else
			fileout << line;
		if (!filein.eof())
			fileout << "\n";
	}
	if (filein.bad())
	{
		std::cerr << "Unexpected error ocurred!" << std::endl;
		return (1);
	}
	else if (filein.fail() && !filein.eof())
	{
		std::cerr << "Error ocurred when reading from file!" << std::endl;
		return (1);
	}
	fileout.close();
	filein.close();
	return (0);
}
