#include "Harl.hpp"

int main()
{
    Harl harl;
    std::string level;

    std::cout << "Option available : DEBUG, INFO, WARNING, ERROR" << std::endl;
    std::getline(std::cin, level);

    harl.complain(level);
    return (0);
}