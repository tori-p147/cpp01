#include <HumanA.hpp>

HumanA::HumanA(std::string newName, Weapon &newWeapon)
    : w(newWeapon), name(newName)
{
}

void HumanA::attack()
{
	std::cout << name << " attacks with their " << w.getType() << std::endl;
}
