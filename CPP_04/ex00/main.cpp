#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    Animal  animal("abracadabra!!!");
    Dog     dog1;
    Cat     cat1;
    Dog     dog2;

    std::cout << "\n------------------------------------------\n";
    animal.makeSound();
    std::cout << animal.getType() << std::endl;
    std::cout << "\n------------------------------------------\n";
    dog1.makeSound();
    dog2.makeSound();
    cat1.makeSound();
    cat1.makeSound();
    cat1.makeSound();
    std::cout << "\n------------------------------------------\n";
    std::cout << cat1.getType() << std::endl;
    std::cout << dog1.getType() << std::endl;
    std::cout << dog2.getType() << std::endl;
    std::cout << "\n------------------------------------------\n";

}