#include <Zombie.h>

Zombie::~Zombie()
{
    std::cout << getName() << " is dead" << std::endl;
};


void Zombie::announce(void)
{
    std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
};
