/* 16th vIDEO VAPAS DEKHNA HAI */                                    
                                    // Call by vaLUE fuction
// #include<iostream>
// using namespace std;

//                            // function AS A SUM
// int sum(int a, int b){
//     int c = a + b;
//     return c;
// }

// int main(){
//     cout<<"The sum of 4 and 5 is "<<sum(4, 5);

//     return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////////////////////
                          // function TO SWAP VARIABLES //

// QUES----) https://stackoverflow.com/questions/16161516/ WHY CAN'T I PASS IN VARIABLES TO IMPLEMENT A SWAP
                                                        // FUNCTION

// ANS----) By default function arguments are passed by value in C and C++. 
// This basically means a copy of the passed argument is received in the function. 
// This copy is distinct from the passed variable and any change on this copy is not reflected back 
// to the passed argument. So your first snippet actually swaps copies of the passed arguments and not
//  the arguments themselves.
// For the swapping to be reflected back to the arguments being passed, You need to pass by reference,
//  In C this is acheived by using pointers. Where the address of the arguments is passed to function 
//  and the function actually operates on the memory address passed to it, i.e: the original variable 
//  who's value is being passed.



//    The given code does not swap values (WHY???????) ----> REASON ABHI BHI CLEAR NHI HAI SAHI Se

// // int swap(int a, int b){             //Temp       a        b
//     void swap(int a, int b){        //-->  iG void function is used as we don't want 
//                                           // to return any value {VOID IS A RETURN TYPE}
//     int temp = a;                      //4          4        5 
//     a = b;                             //4          5        5
//     b = temp;                          //4          5        4
// }

// int main(){
//     int x = 4, y = 5;
//     cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
//     swap(x, y);
//     cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
//     return 0;
// }


///////////////////////////////////////////////////////////////////////////////////////////////////////
//                   /* Ab jo code likha jayega usse variables swap ho jaynge */


//        // CALL BY REFERENCE USING POINTERS 
// //                                      //Temp       a        b
//     void pointerswap(int* a, int* b){        //--> void function is used as we don't want 
//                                           // to return any value 
// //______________________________________________________________________________________________________                                      
//     int temp = *a;                      //4          4        5 
//     *a = *b;                            //4          5        5
//     *b = temp;                          //4          5        4
// }

// int main(){
//     int x = 4, y = 5;
//     cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
//     pointerswap(&x, &y);
//     cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;

//     return 0;
// }

// //////////////////////////////////////////////////////////////////////////////////////////////////////
       
//                 // CALL BY REFERENCE USING C++ reference VARIABLES

// //                                              //Temp       a        b
//     void swaprefvar(int &a, int &b){                              //-->  iG void function is used as we don't want 
//                                                                   // to return any value 
//     int temp = a;                      //4          4        5 
//     a = b;                             //4          5        5
//     b = temp;                          //4          5        4
// }

// int main(){
//     int x = 4, y = 5;
//     cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
//     swaprefvar(x, y);
//     cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;

//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////

//                                             // CODE AS GIVEN IN THE VIDEO //

#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}

// This will not swap a and b
void swap(int a, int b){ //temp a b
    int temp = a;        //4   4  5   
    a = b;               //4   5  5
    b = temp;            //4   5  4 
}

// Call by reference using pointers
void swapPointer(int* a, int* b){ //temp a b
    int temp = *a;          //4   4  5   
    *a = *b;               //4   5  5
    *b = temp;            //4   5  4 
}

// Call by reference using C++ reference Variables
// int & 
void swapReferenceVar(int &a, int &b){ //temp a b
    int temp = a;          //4   4  5   
    a = b;               //4   5  5
    b = temp;            //4   5  4 
    // return a;
}

int main(){
    int x =4, y=5;
    // cout<<"The sum of 4 and 5 is "<<sum(a, b);
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    // swap(x, y); // This will not swap a and b
    // swapPointer(&x, &y); //This will swap a and b using pointer reference
    swapReferenceVar(x, y); //This will swap a and b using reference variables
    // swapReferenceVar(x, y) = 766; //This will swap a and b using reference variables
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 
    return 0;
}



// #include <iostream>
// using namespace std;

// void duplicate (int &a, int& b, int &c)
// {
//   a *= 2;
//   b *= 2;
//   c *= 2;
// }

// int main ()
// {
//   int x=1, y=3, z=7;
//   duplicate (x, y, z);
//   cout << "x=" << x << ", y=" << y << ", z=" << z;
//   return 0;
// }
// // difference between call by reference using pointers and reference variable 
// void duplicate (int* a, int* b, int* c)
// {
//   *a *=2;
//   *b *=2;
//   *c *=2;
// }

// int main ()
// {
//   int x=1, y=3, z=7;
//   duplicate (&x, &y, &z);
//   cout << "x=" << x << ", y=" << y << ", z=" << z;
//   return 0;
// }




