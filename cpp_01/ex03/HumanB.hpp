#include "Weapon.hpp"

class HumanB
{
    public:
        HumanA::HumanB(std::string name, Weapon &weapon);
        HumanA::~HumanB();

        void attacks() const;
    private:
        std::string _name;
        Weapon &_weapon;
};