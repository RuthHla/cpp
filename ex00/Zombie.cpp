#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name)
{
    std::cout << "the zombie : " << this->_name << " ;has been create" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "the zombie : " << this->_name << " ;died" << std::endl;
}   

void Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

