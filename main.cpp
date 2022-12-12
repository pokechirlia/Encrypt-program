#include <iostream>
#include <fstream>
#include <string>
#include "encrypt.h"

using namespace std;

int main()
{
    print_message("intro.txt");

    string option;
    cin >> option;

    while (option.compare("0"))
    {
        if (option.length() > 1)
        {
            cout << "Invalid input" << endl;
            print_message("intro.txt");
            cin >> option;
            continue;
        }

        switch (option[0])
        {
        case '1':
            cout << "You just picked " << option << endl;
            break;
        default:
            cout << "Invalid input" << endl;
        }

        print_message("intro.txt");
        cin >> option;
    }

    return 0;
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

void classical_crypt()
{
    cout << "?" << endl;
}