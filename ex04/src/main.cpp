#include <Replacer.hpp>

static int	printErrorAndExit(std::string msg)
{
	std::cerr << msg << std::endl;
	return (EXIT_FAILURE);
}

int	main(int argc, char **argv)
{
	char	*s1;
	char	*s2;
	size_t	pos;
	size_t	len;

	if (argc != 4)
		return (printErrorAndExit("Invalid argumants!"));
	s1 = argv[2];
	s2 = argv[3];
	std::ifstream filein(argv[1]);
	if (!filein.is_open())
		return (printErrorAndExit("File not exist or no permission!"));
	pos = 0;
	len = std::strlen(s1);
	std::string filenameStr(argv[1]);
	std::ofstream fileout(filenameStr.append(".replace"));
	std::string line = "";
	for (; std::getline(filein, line);)
	{
		for (size_t i = 0; i < line.length(); i++)
		{
			std::size_t found = line.find(s1);
			if (found != std::string::npos)
			{
				std::string front = line.substr(0, found);
				std::string rest = line.substr(found + len, line.length());
				front.append(s2).append(rest);
				i = found + len;
				line = front;
			}
		}
		fileout << line;
		if (!filein.eof())
			fileout << "\n";
	}
	if (filein.bad())
		return (printErrorAndExit("Unexpected error ocurred!"));
	else if (!filein.eof())
		return (printErrorAndExit("Error ocurred when reading from file!"));
	fileout.close();
	filein.close();
	return (EXIT_SUCCESS);
}
