// TYPES OF FUNCTIONS --> https://www.programiz.com/cpp-programming/user-defined-function-types                        
                                    //    FUNCTIONS IN C++
///////////////////////////////////////////////////////////////////////////////////////////////////////////

// # include<iostream>
// using namespace std;

// int sum(int a, int b){
//         int c = a+b;
//         return c;
//     }


// int main(){
//     int num1, num2;
//     cout<<"The first number is "<<endl;
//     cin>>num1;
//     cout<<"The second number is "<<endl;
//     cin>>num2;
//     cout<<"The sum is "<<sum(num1, num2)<<endl;
//     return 0;

// }

///////////////////////////////////////////////////////////////////////////////////////////////////////////



//                                       FUNCITON PROTOTYPEs
// it is used where we are creating the function but are placing it after the int main function
//          it acts as an indication that we are going to use the specified arguments furtheer in the programme

# include<iostream>
using namespace std;


int sum (int a, int b);                     //-->  THIS acts as a function prototyp
// int sum (int a,b);                      // NOt Acceptable
int sum (int, int );                      // Acceptable form
                    // 16_functions.cpp: In function 'int main()':
                    // 16_functions.cpp:51:40: error: 'sum' was not declared in this scope
                    //      cout<<"The sum is "<<sum(num1, num2)<<endl;
// agar pehle define nhi kara function, then upar vali line ka error dikhega


// void g(void);                            // Acceptable
            //  ONE AND THE SAME THING
void g();                                  // Acceptable


int main(){
    int num1, num2;
    cout<<"The first number is "<<endl;
    cin>>num1;
    cout<<"The second number is "<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1, num2)<<endl; 
    g();

}

int sum(int a, int b){
        int c = a+b;
        return c;
    }


void g(){
    cout<<"hello adi sir , Good morning "<<endl;
}                                        // ig Void function is used when we don't want to use 
                                              // any kind of arguments in making the functionnnnn...

// here num1 and num2 are actual parameters 
//  while a and b are formal parameters and will be taking values from actual parameter
//           num1 and num2
