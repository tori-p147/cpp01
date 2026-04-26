#include <HumanB.hpp>

HumanB::HumanB(std::string newName)
{
	name = newName;
}

void HumanB::setWeapon(Weapon &newWeapon)
{
	this->w = &newWeapon;
}

void HumanB::attack()
{
	std::cout << name << " attacks with their " << this->w->getType() << std::endl;
}
