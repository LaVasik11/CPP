#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name) 
{
	std::cout << this->name << " is born" << std::endl;
}

Zombie::~Zombie() 
{
	std::cout << this->name << " is destroyed" << std::endl;
}

void Zombie::announce() 
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}