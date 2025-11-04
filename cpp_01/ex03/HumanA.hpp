#include "Weapon.hpp"

class HumanA
{
    public:
        HumanA::HumanA(std::string name, Weapon &weapon);
        HumanA::~HumanA();

        void attacks() const;
    private:
        std::string _name;
        Weapon &_weapon;
};