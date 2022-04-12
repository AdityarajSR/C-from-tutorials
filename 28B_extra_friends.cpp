// THIS CODE GIVES A COMPLEX PROBLEM FOR THE FRIEND FUNCTIONS TOPIC
// THE FRIEND FUNCTION CAN BE DECLARED EITHER IN THE PRIVATE PART OR THE PUBLIC PART

#include <iostream>
using namespace std;

class c2;

class c1
{
    int val1;
    friend void exchange(c1 &, c2 &);

public:
    int inputdata(int a)
    {
        val1 = a;
    }
    void display()
    {
        cout << val1 << endl;
    }
};

class c2
{
    int val2;
    friend void exchange(c1 &, c2 &);

public:
    int inputdata(int a)
    {
        val2 = a;
    }
    void display()
    {
        cout << val2 << endl;
    }
};

void exchange(c1 &x, c2 &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main()
{
    c1 oc1;
    c2 oc2;
    oc1.inputdata(34);
    oc2.inputdata(67);
    exchange(oc1, oc2);

    // cout<<"The value of c1 after exchanging becomes "<<oc1.display(); //-->THESE ARE THE WRONG METHOD OF USING DISPLAY
    // cout<<"The value of c2 after exchanging becomes "<<oc2.display; //--> FUNCTION AS THEY THEMSELVES PRINT WHAT WE NEED
    cout << "The value of c1 after exchanging becomes " << endl;
    oc1.display();
    cout << "The value of c2 after exchanging becomes " << endl;
    oc2.display();

    return 0;
}