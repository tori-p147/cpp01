#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie
{

private:
    std::string name;

public:
    Zombie()
    {
    }
    Zombie(std::string p_name)
    {
        name = p_name;
    }
    ~Zombie();
    std::string getName()
    {
        return (name);
    }
    void setName(std::string p_name)
    {
        name = p_name;
    }
    void announce(void);
};

Zombie *zombieHorde(int N, std::string name);

#endif