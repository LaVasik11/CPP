#include "Zombie.hpp"

Zombie::Zombie() {
	std::cout << "new zombie is born" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "zombie died" << std::endl;
}

void	Zombie::announce() const {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(str name)
{
	this->name = name;
}