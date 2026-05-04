#include <Harl.hpp>

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ] \nI tried open a door" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ] \nToday is good weather for touch grass" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ] \nI tried stand up from bed, but than was impossible" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ] \nI`cant leave my house, because door was closed from outside" << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*fncs[]) () = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string lvls[] = {"debug", "info", "warning", "error"};

	for (size_t i = 0; i < lvls->length(); i++)
	{
		if (lvls[i] == level)
		{
			(this->*fncs[i])();
			return;
		}
	}
}
