//                     IMPORTANT TO REMEMBER AS IT IS A NEW CONCEPT

#include <iostream>
using namespace std;
int main(){
    // WHAT IS A POINTER --> A pointer is a data type that stores the address of other data types
    int a = 3;
    int* b = &a;
    // a value of type "int" cannot be used to initialize an entity of type "int *"C/C++(144)

    // int d = 4;
    // int f = &d;                 // yaha par & use karne par error aa raha hai 
    //                 //  a value of type "int *" cannot be used to initialize an entity of type "int"C/C++(144)
    //                     //  {The above quoted is an error}
    cout<<b<<endl; 
    cout<<&a<<endl;
                                                                     

    // & --> gives the address of the operator
    // b stores the address of a using *
    cout << "The address of a is "<< &a<<endl;
    cout << "The address of a is " << b<<endl;

    // * --> dereference operator
    cout<<"The value at address b is "<<*b<<endl;
        

        // POINTER TO POINTER 
        /* Ek pointer dusre pointer ka address store karega isme */
    
    int **c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;

    return 0;
}
