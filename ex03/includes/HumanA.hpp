#ifndef HUMAN_A_H
# define HUMAN_A_H

# include <Weapon.hpp>
# include <iostream>

class HumanA
{
  private:
	Weapon &w;
	std::string name;

  public:
	HumanA(std::string newName, Weapon &newWeapon);
	void attack();
};

#endif