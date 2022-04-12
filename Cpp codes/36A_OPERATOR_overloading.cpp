#include <iostream>
using namespace std;
class Complex
{
private:
    int real_part, imag_part;
public:
    Complex(){}
    Complex(int r, int i){
        real_part = r;
        imag_part = i;}
    void print(){
        cout << "a = " << real_part << " b = " << imag_part << endl;}
//Return type-"operator" keyword--operator used-argument with data type
    Complex operator +(Complex c){// OPERATOR OVERLOADING SYNTAX(METHOD)
        Complex temp;
        temp.real_part = real_part + c.real_part;
        temp.imag_part = imag_part + c.imag_part;
        return temp;    }
};

int main()
{
    cout<<"Performing operations" 
    "on primitive data type gives"<<endl;
    int x = 3, y = 4;
    int z = x + y;
    cout<< z <<endl;
    cout<<"Performing operations" 
    "on user defined data type gives"<<endl;
    Complex c1(2,5);
    Complex c2(3,4);
    Complex c3;
    c3 = c1 + c2; 
    // c3 = c1.add(c2);
    c3.print();
    return 0;
}