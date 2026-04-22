#include <Zombie.h>

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *z[]{}; 
    for (int i = 0; i < N; i++)
    {
        *z = new Zombie(name);
        
    }
}