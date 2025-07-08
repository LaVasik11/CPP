#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
    Weapon  *weapon;

    weapon->setType("Glock 17");

    HumanA human1("Bob", weapon);
    HumanB human2("Bill");

    return (0);
}