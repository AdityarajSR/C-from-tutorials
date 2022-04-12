#include <iostream>
using namespace std;

class B
{
public:
    void say()
    {
        cout << "Hello world " << endl;
    }
};
             //  yaha PAR BASE CLASS - B MEIN BHI AUR DERIVED CLASS - D MEIN BHI say() naam ka function hai 
            // but dono k kaam alag alag hai to compiler kya karega D's say() method will override B's say() function

class D : public B{
    int a;
    public:
        void say(){
            cout<<"HEllo all the beautiful people.."<<endl;
        }
};

int main()
{
    D objectd;
    B objectb;
    objectb.say();
    objectd.say();

    return 0;
}