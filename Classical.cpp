#include <iostream>
#include "encrypt.h"

Classical::Classical()
{
}

void Classical::shiftCipher()
{
    print_message("shift_text.txt");

    std::string message, key, option;

    std::cout << "Enter your message/ciphertext: " << std::endl;
    std::getline(std::cin, message);
    std::cout << "Enter your key: " << std::endl;
    std::getline(std::cin, key);
    if (isNumber(key))
        std::cout << std::stoi(key) << " is entered" << std::endl;
    std::cout << "Enter your option: " << std::endl;
    std::getline(std::cin, option);

    while (option.compare("0"))
    {
        if (option.length() > 1)
        {
            std::cout << "Invalid input" << std::endl;
            std::cout << "Please enter your input again: " << std::endl;
            std::getline(std::cin, option);
            continue;
        }

        // switch (option[0])
        // {
        // case '1':
        //     std::cout << "You pick encrypt" << std::endl;
        //     break;
        // default:
        //     std::cout << "Invalid input" << std::endl;
        //     std::cout << "Please enter your option again: " << std::endl;
        //     std::getline(std::cin, option);
        //     continue;
        // }

        print_message("intro.txt");
        std::getline(std::cin, option);
    }
    // std::cout << "shifft" << std::endl;
}

void Classical::shiftEncrypt()
{
    std::cout << "Please enter a message: ";
}