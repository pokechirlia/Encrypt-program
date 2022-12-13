#include <iostream>
#include <unistd.h>
#include "encrypt.h"

Classical::Classical()
{
}

void Classical::shiftCipher()
{
    print_message("shift_text.txt");

    std::string message, key, option;

    std::cout << "Enter your message/ciphertext: ";
    std::getline(std::cin, message);
    std::cout << "Enter your key: ";
    std::getline(std::cin, key);
    std::cout << "Enter your option: ";
    std::getline(std::cin, option);

    while (option.compare("0"))
    {

        if (!isNumber(key))
        {
            std::cout << "Invalid key - Enter your key again: ";
            std::getline(std::cin, key);
            continue;
        }

        if (!isNumber(option))
        {
            std::cout << "Invalid option - Enter your option again: ";
            std::getline(std::cin, option);
            continue;
        }

        switch (stoi(option))
        {
        case 1:
            std::cout << "Encrypted!!! Your message is: " << shiftEncrypt(message, stoi(key)) << std::endl;
            sleep(5);
            break;
        default:
            std::cout << "Invalid option - Enter your option again: ";
            std::getline(std::cin, option);
            continue;
        }

        print_message("shift_text.txt");
        std::getline(std::cin, option);
    }
}

std::string Classical::shiftEncrypt(std::string &message, int key)
{
    std::string ciphertext = "";
    for (char ch : message)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            ch += key;
            if (ch > 'z')
                ch -= ('z' - 'a' + 1);
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            ch += key;
            if (ch > 'Z')
                ch -= ('Z' - 'A' + 1);
        }

        ciphertext += ch;
    }

    return ciphertext;
}