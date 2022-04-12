// Inline Functions in C++
// Inline functions are used to reduce the function call. When one function is being called multiplE times in the
//  program it increases the execution time, so inline function is used to reduce time and increase program 
// efficiency. If the inline function is being used when the function is called, the inline function expands the
//  whole function code at the point of a function call, instead of running the function. Inline functions are
//   considered to be used when the function is small otherwise it will not perform well. Inline is not recommended
//    when static variables are being used in the function. An example of an inline function is shown in Code 
//    Snippet 1.

// inline int product(int a, int b){
//     return a*b;
// }


///////////////////////////////////////////////////////////////////////////////////////////////////////////////
// As shown in Code Snippet 1, 1st inline keyword is used to make the function inline. 2nd a product function is
//  created which has two arguments and returns the product of them. Now we will call the product function 
// multiple times in our main program which is shown in Code Snippet 2.

// #include <iostream>
// using namespace std;
// int main(){
//     int a, b;
//     cout<<"Enter the value of a and b"<<endl;
//     cin>>a>>b;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

inline int product(int a, int b){
    return a*b;
}

int main(){
    int a, b;
    cout<<"Enter the value of a and b "<<endl;
    cin>>a, b;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////

                                             /* USING STATIC INT  */
                                /* DEMANDS INITIALIZATION AND LOOKS LIKE LOOP TO ME  */

#include <iostream>
using namespace std;

inline int product(int a, int b){
    static int c = 0;       //  This executes only once 
    c = c + 1;              //  Next time this function is run, the value of c is retained
    return a*b+c;           // A static variable should not be used with inline function as used here
}

int main(){
    int a, b;
    cout<<"Enter the value of a and b "<<endl;
    cin>>a, b;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////

                                    /* USING DEFAULT ARGUMENTS*/

float moneyReceived(int currentMoney, float factor=1.04){      // DEFAULT ARGUMENT HAMESHA RIGHTMOST ENDS 
                                                              // PAR HI HONA CHAHIYE
    return currentMoney * factor;
}

// int strlen(const char *p){

// }
int main(){
    int a, b;
    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money)<< 
    "Rs after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money, 1.1)<< 
    " Rs after 1 year";
    return 0;
}
                             
///////////////////////////////////////////////////////////////////////////////////////////////////////////                            
                             
                            // USING CONSTANT ARGUMENTS //

float moneyReceived(int currentMoney, float factor=1.04){      // DEFAULT ARGUMENT HAMESHA RIGHTMOST ENDS 
                                                              // PAR HI HONA CHAHIYE
    return currentMoney * factor;
}

// int strlen(const char *p){

// }
int main(){
    int a, b;
    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money)<<
    "Rs after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money, 1.1)<<
    " Rs after 1 year";
    return 0;
}

