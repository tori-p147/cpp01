#include <Harl.hpp>

static std::string logLevelToString(LogLevels lvl)
{
	switch (lvl)
	{
	case DEBUG:
		return ("debug");
		break ;
	case INFO:
		return ("info");
		break ;
	case WARNING:
		return ("warning");
		break ;
	case ERROR:
		return ("error");
		break ;
	default:
		return ("unknown");
		break ;
	}
}

static LogLevels	stringToLogLevel(std::string lvl)
{
	if (lvl == "DEBUG")
		return (DEBUG);
	if (lvl == "INFO")
		return (INFO);
	if (lvl == "WARNING")
		return (WARNING);
	if (lvl == "ERROR")
		return (ERROR);
	return (UNKNOWN);
}

void	printLevelAndAbove(LogLevels enumLvl)
{
	Harl	harl;
	size_t	i;

	i = static_cast<size_t>(enumLvl);
	if (i >= LEVELS - 1)
	{
		std::cout << "[ Probably complaining about insignificant problems ]\n";
		return ;
	}
	for (; i < LEVELS; i++)
	{
		harl.complain(logLevelToString(static_cast<LogLevels>(i)));
	}
}

int	main(int argc, char **argv)
{
	LogLevels	enumLvl;

	if (argc != 2)
		return (1);
	std::string lvl = argv[1];
	enumLvl = stringToLogLevel(lvl);
	printLevelAndAbove(enumLvl);
	return (0);
}
