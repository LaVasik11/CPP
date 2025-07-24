#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include "iostream"

class ClapTrap
{
    public:
        ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(ClapTrap const &src);
		ClapTrap&	operator=(ClapTrap const &rSym);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    private:
        std::string name;
        int         hp;
        int         ep;
        int         damage;
};

#endif