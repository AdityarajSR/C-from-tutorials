//                                                 VAPAS SE DEKHNA HAI YE CHEEZ
#include <iostream>
using namespace std;

class Number
{
private:
    int a;

public:
    Number()
    {
        a = 0;
    }
    // Number() {}   // Agar values dekar koi constructor banaya hai toh ye vala constructor
    // banana mandatory hoga YA UPAR VALA(BINA KUCH PASS KARE BANANA HAI), nhi to error aayega
    // AUR NICHE BANAYE HUYE IBJECTS DEFAULT CONSTRUCTORS KI TALASH MEIN JUTE RAHENGE
    Number(int num)
    {
        a = num;
    }
    // When no copy constructor is found, compiler supplies its own copy constructor
    Number(Number &obj)
    {
        cout << "Copy constructor called!!!" << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};
int main()
{
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    Number z1(z); // Copy constructor invoked
    z1.display();

    z2 = z; // Copy constructor not called
    z2.display();

    Number z3 = z; // Copy constructor invoked
    z3.display();

    // z1 should exactly resemble z  or x or y

    return 0;
}
