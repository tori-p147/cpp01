#include <Zombie.hpp>

int main()
{
    std::string name1("Stack_zombie");
    randomChump(name1);
    std::string name2("Heap_zombie");
    Zombie *z = newZombie(name2);
    z->announce();
    delete (z);
    return (0);
}
