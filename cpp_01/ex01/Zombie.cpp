#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "A zombie has been create" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "the zombie : " << this->_name << " died" << std::endl;
}   

void Zombie::setName(std::string name)
{
    this->_name = name;
}

void Zombie::announce(void) const
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
