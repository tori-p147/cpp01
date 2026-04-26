#include <Weapon.hpp>

Weapon::Weapon()
{
}
Weapon::Weapon(std::string newType)
{
	type = newType;
}
std::string Weapon::getType()
{
	return (type);
}
void Weapon::setType(std::string newType)
{
	type = newType;
}
