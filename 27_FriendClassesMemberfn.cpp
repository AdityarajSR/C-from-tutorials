// C++ IS CASE SENSITIVE LANGUAGE 
// USKI VAJAH SE BOHOOT DIKKAT AAYI HAI 

#include <iostream>
using namespace std;

class Complex;             // ------------> Forward declaration

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};

class Complex
{
    int a, b;

    //   IDHAR SE MILTI HAI INDIVIDUAL PERMISSION
    friend int Calculator ::sumRealComplex(Complex o1, Complex o2);
    friend int Calculator ::sumCompComplex(Complex o1, Complex o2);
    //    calculator class ko complex class k variables ko access karne ki permission
    //    mil gayi hai using the above lines
// --------------------------------------------------------------------------------------------------------    
    //   IDHARR SE MILTI HAI UNIVERSAL PERMISSION(DECLARING THE ENTIRE CALCULATOR CLASS AS FRIEND )
    // friend class calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << "+" << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}


int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    int resc = calc.sumCompComplex(o1, o2);
    cout << "The sum of complex part of o1 and o2 is " << resc << endl;
    return 0;
}
