#include "Weapon.hpp"

class HumanB
{
    public:
        HumanB(std::string name);
        HumanB();
        ~HumanB();
        void setWeapon(Weapon &weapon);
        void attack() const;
        
    private:
        std::string _name;
        Weapon *_weapon;
};