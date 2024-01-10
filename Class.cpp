#include <iostream>

using namespace std;

class soundAnimal
{
public:
    void sound()
    {
        cout << "The animal makes a sound \n";
    }
};
class pig : public soundAnimal
{
public:
    void sound1()
    {
        cout << "The pig says: wee wee \n";
    }
};
class dogs : public pig
{
public:
    void sound2()
    {
        cout << "The dog says: bow wow \n";
    }
};
int main()
{
    soundAnimal obj1;
    pig obj2;
    dogs obj3;

    obj1.sound();
    obj2.sound1();
    obj3.sound2();
}
