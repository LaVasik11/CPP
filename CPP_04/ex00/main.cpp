#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal      animal;
    Dog         dog1;
    Dog         dog2;
    Cat         cat1;
    WrongAnimal wrongAnimal;
    WrongCat    wrongCat;

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
    wrongAnimal.makeSound();
    std::cout << wrongAnimal.getType() << std::endl;
    wrongCat.makeSound();
    std::cout << wrongCat.getType() << std::endl;
    std::cout << "\n------------------------------------------\n";

}