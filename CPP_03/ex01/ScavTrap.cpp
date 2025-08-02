#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap()
{
	std::cout << "ScavTrap constructor called for" << std::endl;
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src.getName()) {
	*this = src;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor called for " << name << std::endl;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const &rSym) {
	if (this != &rSym) {
		this->name = rSym.getName();
		this->hp = rSym.getHitPoints();
		this->ep = rSym.getEnergyPoints();
		this->damage = rSym.getAttackDamage();
	}
	return *this;
}

void	ScavTrap::attack(const std::string &target)
{
	std::cout << "ScavTrap " << this->name << " go for broke " << target << " causing him " << this->damage << " attack damage" << std::endl;
}

void	ScavTrap::guardGate() const
{
	std::cout << "ScavTrap " << this->name << " is now in Gatekeeper mode." << std::endl;
}