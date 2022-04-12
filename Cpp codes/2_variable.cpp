# include <iostream>
using namespace std;
int main(){
    int sum = 11; 
    cout << "hello world  " <<sum <<endl;
    int aditya = 1;
    cout <<" dare to dare "<<endl;
    cout << aditya << " JAI SHREE RAM"<<endl;

    // cout << aditya; << "JAI SHREE RAM";       {EK line mein ";" ek hi baar use ho sakta hai }
                                               //{varies according to the conditions "SEE ALL CODES"}
                                               /*{can combine two variables in same line with cout but 
                                               they should have the same data type }*/


//     int sum = 1;     {using this again in the code I get below shown error} --|
//                      {can't declare a variable twice  !!!!!!}       <--|

// variable.cpp: In function 'int main()':
// variable.cpp:7:9: error: redeclaration of 'int sum'
//      int sum = 1;
//          ^~~
// variable.cpp:4:9: note: 'int sum' previously declared here
//      int sum = 1; cout << "hello world"; 
//          ^~~  
    // cout << "need to dare";
    return 0;
}

/* ARITCLES FROM STACKOVERFLOW {{REGARDING ABOVE ERROR}}

Variables can be redeclared in inner scopes. THIS IS CALLED SHADOWING
 However, what you're trying to do is redeclare the variable in the same scope.
 int a = 0;
int a = 1;
Here, we are trying to create two variables in the same scope with the same name. 
The C++ standard explicitly disallows this. 
There's no mechanical reason that this must be disallowed, 
but since there are almost no reasons you would want to intentionally do this, 
the standard forbids it, as it is much more likely that you intended to make an assignment.
 If you really want two variables with the same name, you can use an explicit block. */




//                 http://www.cplusplus.com/forum/beginner/212050/ ----GIVES ANSWER FOR
//                          Why are we allowed to redeclare the same variable inside of a loop?




