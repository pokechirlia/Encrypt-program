#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream intro("intro.txt");

    string line;
    while (getline(intro, line))
    {
        cout << line << endl;
    }
    return 0;
}
