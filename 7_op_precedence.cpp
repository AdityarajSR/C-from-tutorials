#include <iostream>
#include <iomanip>            // Ek aur nayi header file ka swagat karo
// The header file <iomanip. h> is used for providing parametric manipulators like setw, setprecision, setbase,etc. <string. h> :
//  This header file defines several functions to manipulate C strings and arrays.
using namespace std;
///////////////////////////////////////////////////////////////////////////////////////////////////////////
int main(){

    // int a = 34;
    // cout<<"The value of a was originally equal to "<<a<<endl;
    // a = 45;
    // cout<<"The value of a is now equal to "<<a<<endl;
    
    // char c = 'c';
    // // c = '34';                   gives an error
    // // char c = 'e';               error due to redeclaration of variable 
    // c = 'd';                       // but this doew not give redeclaration of variable error
    // // Similar to a the value of c can also be changed


///////////////////////////////////////////////////////////////////////////////////////////////////////////
    
                          //                 // CONSTANT int/float/char IN C++//                //

    // const int ab = 435;
    // // ab = 434;            If i uncomment this code written then we get an error
    //                         // bcoz ab can't be modified due to use of const keyword
    // cout<<"The value of ab is"<<ab<<endl;
///////////////////////////////////////////////////////////////////////////////////////////////////////////


                    //  MANIPULATORS ---> They help us to format what we want to print
    int z = 345, y = 45, x = 6;
    cout<<"The value of x without setw is "<<x<<endl;
    cout<<"The value of y without setw is "<<y<<endl;
    cout<<"The value of z without setw is "<<z<<endl;

                    //   NOW USING SETW    {FIND OUT THE OUTPUT BY RUNNING THE CODE ITSELF}
    cout<<"The value of x with setw is "<<setw(4)<<x<<endl;
    cout<<"The value of y with setw is "<<setw(4)<<y<<endl;
    cout<<"The value of z with setw is "<<setw(4)<<z<<endl;

///////////////////////////////////////////////////////////////////////////////////////////////////////////
    //                          // OPERATOR PRECEDENCE
    // // Tells which operator will be used first according to the given precedence
    // int a = 3, b = 4;
    // int c = a*5 + b;        /* Resolved as {int c = ((a*5) + b)} */
    // int d = a*5 + b - 45 +87;            /* Resolved as {    int c = ((((a*5) + b) - 45)+ 87 )   } */


    //             ///////////  *****Since + and - have the same precedence so now their associativity will be seen 
    //               // in case of + and - it is from left to right******** /////////

    // cout<<"The value of c is "<<c<<endl;
    // cout<<"The value of d is "<<d<<endl;





    return 0;

}