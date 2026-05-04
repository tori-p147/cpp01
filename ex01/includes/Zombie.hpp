#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

class Zombie
{
  private:
	std::string name;

  public:
	Zombie();
	Zombie(std::string p_name);
	~Zombie();
	std::string getName();
	void setName(std::string p_name);
	void announce(void);
};

Zombie	*zombieHorde(int N, std::string name);

#endif