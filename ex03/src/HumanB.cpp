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
	if (!this->w)
	{
		std::cerr << "Weapon isn`t equipped!\n";
		return ;
	}
	std::cout << name << " attacks with their " << this->w->getType() << std::endl;
}
