#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger."
    " I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money."
    " You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free."
    " I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
    std::string tab[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void(Harl::*funct[])() =
    {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    int i = 0; 
    while(i < 4 && tab[i] != level)
        i++;
    
    switch(i)
    {
        case 0 :
            std::cout << "[ " << tab[0] << " ]" << std::endl;
            (this->*funct[0])();
            [[fallthrough]];
        case 1 :
            std::cout << "[ " << tab[1] << " ]" << std::endl;
            (this->*funct[1])();
            [[fallthrough]];
        case 2 :
            std::cout << "[ " << tab[2] << " ]" << std::endl;
            (this->*funct[2])();
            [[fallthrough]];
        case 3 :
            std::cout << "[ " << tab[3] << " ]" << std::endl;
            (this->*funct[3])();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    } 
}
