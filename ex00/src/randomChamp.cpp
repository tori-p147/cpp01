#include <Zombie.h>

void randomChump(std::string name)
{
    Zombie z;
    z.setName(name);
    z.announce();
};
