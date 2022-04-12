#include <iostream>
using namespace std;

// Destructor never takes an argument nor does it return any value
int count = 0;
class Num
{
public:
    Num()
    {
        count++;
        cout << "This is the time when constructor is called for object number " << count << endl;
    }
    ~Num()
    {
        cout << "This is the time when destructor is called for the object number " << count << endl;
        count--;
        // yaha par humne destructor k andar keval values kam zyada kari hai aur print function use kara hai 
        // iske saath saath hum dynamic memory ko free bhi kar akte hai jo humne program mein pehle kahi use 
        // kar rakhi ho
        // YA PHIR WE CAN MIX THIS CONCEPT WITH OTHERS ALSO
    }
};
int main()
{
    cout << "We are inside our main function" << endl;
    cout << "Creating first object n1" << endl;
    Num n1;
    // NEECHE JO HUMNE BANAYA HAI, VO EK BLOCK HAI
    // USKE ANDAR JO BHI VARIABLE BANEGA VO BLOCK KHATAM HOTE
    // HI DESTROY HO JAAYEGA

    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;
        Num n2, n3;
        cout << "Exiting this block" << endl;
    }
    cout << "Back to main" << endl;
    return 0;
}
