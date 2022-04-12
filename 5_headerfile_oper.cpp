//  There are two types of header files
//  1) system header files : Comes with the compiler
#include <iostream>
//  2) user defined header files : written by programmer
#include "this.h" // This line will cause error if "this.h" is not present in the current directory
// OPERATORS IN C++
                                
using namespace std;
int main(){
                         /* ARITMETIC OPERATORS */
int a = 6 , b = 4;
// For copying the same line again use {shift+alt+up_down_arrow_key}
// Both endl and \n have the same functionality
cout<<"NOW WE ARE GOING TO LEARN ABOUT ARITHMETIC OPERATORS"<<endl;
cout <<"The value of a is "<<a<<endl<<"The value of b is "<<b<<endl;
cout <<endl;

cout<<"The value of a+b is "<< a+b<<endl;
cout<<"The value of a-b is "<< a-b<<endl;
cout<<"The value of a*b is "<< a*b<<endl;
cout<<"The value of a/b is "<< a/b<<endl;   // gives ans as 1 {divisor}
cout<<"The value of a%b is "<< a%b<<endl;   // gives ans as 2 {remainder}
cout<<endl;

                                        // INCREMENT AND DECREMENT OPERATOR
// When an increment or decrement is used as part of an expression, 
// there is an important difference in prefix and postfix forms.
//  If you are using prefix form then increment or decrement will be done before rest of the expression,
// and if you are using postfix form, then increment or decrement will be done after the complete 
// expression is evaluated.

// REFERENCES --> https://www.tutorialspoint.com/cplusplus/cpp_increment_decrement_operators.htm
cout<<"The value of a++ is "<< a++<<endl;
cout<<"The value of a-- is "<< a--<<endl;
cout<<"The value of --a is "<< --a<<endl;
cout<<"The value of ++a is "<< ++a<<endl;
cout<<endl;                              
                         /* ASSIGNMENT OPERATORS */
// Assignment operators are used to assigning value to a variable.
                // (a += b) can be written as (a = a + b)
                // (a -= b) can be written as (a = a - b)
                // (a *= b) can be written as (a = a * b)
                // (a /= b) can be written as (a = a / b)
cout<<"NOW WE ARE GOING TO LEARN ABOUT ASSIGNMENT OPERATORS"<<endl;

a = a += b;
cout<<"The value of a += b is "<<a<<endl;
// a has now a value of 10

a = a -= 1;
cout<<"The value of a -= 1 is "<<a<<endl;
// a has now a value of 9

a = a *= 3;
cout<<"The value of a *= 3 is "<<a << endl;
cout<<endl;
// a has now a value of 27

//                             // THINGS TO NOTE
int n = a += 5;
// cout<<"The value of a += b is " <<a += 5;  // {YE KARENGE TO ACCHE SE GALTI HOGI(ERROR AAYEGA)}
//                          /* no operator "+=" matches these operands
//                          so we need to USE PARANTHESIS FOR += , THEN NO ERROR WILL BE FOUND */
// cout<<"The value of a += b is " <<(a += 5);


                         /* ASSIGNMENT OPERATORS */
cout<<"NOW WE ARE GOING TO LEARN ABOUT ASSIGNMENT OPERATORS"<<endl;
cout<<"The value of a == b is " << (a==b) << endl;
cout<<"The value of a != b is " << (a!=b) << endl;
cout<<"The value of a >= b is " << (a>=b) << endl;
cout<<"The value of a <=b is " << (a<=b) << endl;
cout<<"The value of a < b is " << (a<b) << endl;
cout<<"The value of a > b is " << (a>b) << endl;
cout<<endl;

                         /* LOGICAL OPERATOR */
cout<<"NOW WE ARE GOING TO LEARN ABOUT LOGICAL OPERATORS"<<endl;
// LOGICAL AND OPERATOR
cout<<"The value of LOGICAL AND OPERATOR ((a==b) && (a<b)) is " <<((a==b) && (a<b))<<endl;
// LOGICAL OR OPERATOR
cout<<"The value of LOGICAL OR OPERATOR ((a==b) || (a<b)) is " <<((a==b) || (a<b))<<endl;
// LOGICAL NOT OPERATOR
cout<<"The value of LOGICAL NOT OPERATOR (!(a==b)) IS "<< (!(a==b))<<endl;

return 0;

}
                                