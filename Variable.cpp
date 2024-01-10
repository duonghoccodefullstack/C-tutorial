#include <iostream>
#include <string>
using namespace std;

int main()
{
    int myNumber = 5;
    float myroundedinteger = 5.999999;
    double myDouble = 5.99;
    char myChar = 'd';
    bool myBoolean = true;
    string myString = " Nguyen Van A";

    cout << "int: " << myNumber << "\n";             // 5
    cout << "Integer: " << myroundedinteger << "\n"; // 6
    cout << "double: " << myDouble << "\n";          // 5.99
    cout << "Char: " << myChar << "\n";              //
    cout << "Boolean: " << myBoolean << "\n";        // true -> 1 || false -> 0
    cout << "String: " << myString << "\n";          // name
}
