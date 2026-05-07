#ifndef HUMAN_B_H
# define HUMAN_B_H

# include <Weapon.hpp>
# include <iostream>

class HumanB
{
  private:
	Weapon *w;
	std::string name;

  public:
	HumanB(std::string newName);
	void attack();
	void setWeapon(Weapon &newWeapon);
};

#endif
