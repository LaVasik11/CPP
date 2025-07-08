#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
    Weapon  weapon1("Glock 17");
    Weapon  weapon2("Digle");

    HumanA Bob("Bob", weapon1);
    HumanB Bill("Bill");
    Bill.setWeapon(&weapon2);

    Bob.attack();
    Bill.attack();

    weapon1.setType("Knife");
    weapon2.setType("AK-47");

    Bob.attack();
    Bill.attack();

    return (0);
}