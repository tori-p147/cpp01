#include <Zombie.h>

Zombie::Zombie()
{
}
Zombie::Zombie(std::string p_name)
{
	name = p_name;
}

std::string Zombie::getName()
{
	return (name);
}
void Zombie::setName(std::string p_name)
{
	name = p_name;
}

Zombie::~Zombie()
{
	std::cout << getName() << " is dead" << std::endl;
};

void Zombie::announce(void)
{
	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
};