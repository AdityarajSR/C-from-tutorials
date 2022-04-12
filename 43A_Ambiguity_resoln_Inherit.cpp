#include <iostream>
using namespace std;
class Base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Kaise ho?" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base2 ::greet();         // AMBIGUITY RESOLUTION ISS TARIKE SE KI JAATI HAI
    }
};


int main()
{
    Base1 base1obj;
    Base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    Derived d;              // AGAR HUMNE AMBIGUITY RESOLUTION NHI KARA HAI THEN IDHAR 
                           // ERROR AAYEGA AUR LIKHA AAYEGA KI AMBIGUITY FOUND
    d.greet();

    return 0;
}
