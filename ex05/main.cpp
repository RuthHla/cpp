#include "Harl.hpp"

int main()
{
    std::string input = "";
    Harl test;
    while(1)
    {   
        while(input.empty())
        {
            std::cout << "level available : DEBUG, INFO, WARNING, ERROR" << std::endl;
            getline(std::cin, input);
        }
        switch(input)
        {
            case "DEBUG":
                Harl.debug();
                break;
            case "INFO":
                Harl.info();
                break;
            case "WARNING":
                Harl.warning();
                break;
            case "ERROR":
                Harl.error();
                break;
            
            // case "complain": ??

            default:
                std::cout << "level available : DEBUG, INFO, WARNING, ERROR" << std::endl;
        }
    }

    return (0);
}