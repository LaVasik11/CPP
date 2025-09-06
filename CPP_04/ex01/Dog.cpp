#include "Dog.hpp"

Dog::Dog() : Animal::Animal("Dog")
{
	this->type = Animal::getType();
	std::cout << "Dog Defaut constructor called" << std::endl;
	this->brain = new Brain();
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog Destructor called" << std::endl;
}

Dog::Dog(Dog const &src) : Animal::Animal(src)
{
	*this = src;
}

Dog &	Dog::operator=(Dog const &src)
{
	if (this != &src)
	{
		this->type = src.type;
		this->brain = src.brain;
	}
	return (*this);
}


void	Dog::makeSound() const
{
	std::cout << "woof woof!" << std::endl;
}