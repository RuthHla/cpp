#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
    public:

        Weapon::Weapon();
        Weapon::~Weapon();
        
        const std::string &getType() const;
        void setType(std::string type);

    private:
        std::string _type;
};

#endif