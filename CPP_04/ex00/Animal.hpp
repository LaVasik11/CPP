#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
public:
	Animal();
	~Animal();
	Animal(std::string type);

	Animal(Animal const &src);
	Animal& operator=(Animal const &src);

	std::string	getType(void);

	virtual void	makeSound() const;
protected:
	std::string	type;
};

#endif