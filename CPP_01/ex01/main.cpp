#include "Zombie.hpp"

int	main()
{
	Zombie	*horde = zombieHorde(5, "Bob");
	delete[] horde;
	return 0;
}