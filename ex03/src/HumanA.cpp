#include <HumanA.hpp>

HumanA::HumanA(std::string newName, Weapon &newWeapon) : name(newName), w(newWeapon) {};

void HumanA::attack()
{
	std::cout << name << " attacks with their " << w.getType() << std::endl;
}
