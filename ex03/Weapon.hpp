#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
    public:
        Weapon();
        Weapon(std::string type);
        ~Weapon();
        
        const std::string &getType() const; // donner la reference sans pouvoir modifier 
        void setType(std::string type);

    private:
        std::string _type;
};

#endif