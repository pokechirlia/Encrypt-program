#include <iostream>
#include <string>
#include "encrypt.h"

Classical::Classical()
{
}

void Classical::shiftCipher()
{
    print_message("shift_text.txt");

    // string option;
    // std::getline(std::cin, option);

    // while (option.compare("0"))
    // {
    //     if (option.length() > 1)
    //     {
    //         std::cout << "Invalid input" << std::endl;
    //         std::cout << "Please enter your option again: " << std::endl;
    //         std::getline(std::cin, option);
    //         continue;
    //     }

    //     switch (option[0])
    //     {
    //     case '1':
    //         std::cout << "You pick encrypt" << std::endl;
    //         break;
    //     default:
    //         std::cout << "Invalid input" << std::endl;
    //         std::cout << "Please enter your option again: " << std::endl;
    //         std::getline(std::cin, option);
    //         continue;
    //     }

    //     print_message("intro.txt");
    //     std::getline(std::cin, option);
    // }
    // std::cout << "shifft" << std::endl;
}