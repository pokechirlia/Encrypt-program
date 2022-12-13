#include <iostream>
#include <fstream>
#include <string>
#include "encrypt.h"

using namespace std;

int main()
{
    print_message("intro.txt");

    string option;
    getline(cin, option);

    while (option.compare("0"))
    {
        if (option.length() > 1)
        {
            cout << "Invalid input" << endl;
            cout << "Please enter your option again: " << endl;
            getline(cin, option);
            continue;
        }

        switch (option[0])
        {
        case '1':
            classical_crypt();
            break;
        default:
            cout << "Invalid input" << endl;
            cout << "Please enter your option again: " << endl;
            getline(cin, option);
            continue;
        }

        print_message("intro.txt");
        getline(cin, option);
    }

    return 0;
}

void classical_crypt()
{
    Classical obj;
    print_message("classical_intro.txt");

    string option;
    getline(cin, option);

    while (option.compare("0"))
    {
        if (option.length() > 1)
        {
            cout << "Invalid input" << endl;
            cout << "Please enter your option again: " << endl;
            getline(cin, option);
            continue;
        }

        switch (option[0])
        {
        case '1':
            obj.shiftCipher();
            break;
        default:
            cout << "Invalid input" << endl;
            cout << "Please enter your option again: " << endl;
            getline(cin, option);
            continue;
        }

        print_message("classical_intro.txt");
        getline(cin, option);
    }
}

void print_message(string fileName)
{
    ifstream file(fileName);

    string line;
    while (getline(file, line))
    {
        cout << line << endl;
    }
}

bool isNumber(const string &s)
{
    for (char const &ch : s)
    {
        if (std::isdigit(ch) == 0)
            return false;
    }
    return true;
}