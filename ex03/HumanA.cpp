#include "HumanA.hpp"

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::flush << std::endl;
	std::cout << "HumanA address: " << &this->weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon):name(name), weapon(weapon)
{
}

HumanA::~HumanA(void)
{
}

