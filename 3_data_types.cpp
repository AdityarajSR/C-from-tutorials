# include<iostream>
using namespace std;

int a = 100;                   //--> This out of main function represents the global variable 
int main(){
    int a = 11;
    a = 34;                    //--> This thing inside main function represents the local variable 
                                // THIS IS HOW TO OVERWRITE A VARIABLE //
    a = 1;                     // can also overwrite the variable a but 1 scope mein 1 hi baar
    // int a = 21;                // THIS IS CALLED REDECLARING THE VARIABLE(THIS THING GIVES AN ERROR)
    int b = 15;
    int c = 13,  d = 12;       // can combine two variables if they have the same data types
    float e = 2.00, f = 2.1;
    char adibhai = 'a';
    float bahubali = 2.0;
    bool sach_jhooth = true;
    cout << "My name is D2D "<<a
    << "What to do now is very important to think for me"
  "as i don't wanna lose a lot of time. \nWhen I was "<<c<<" years old, i wished to be newton"
    <<e ;
    cout<<"\nThe character adibhai represents "<<a; /*seeing the output it can be concluded that
                                                the local varaible is given the priority over global variable.*/
    cout<<"\nthe float bahubali represents "<<bahubali<<endl;
    cout<<"\nThe bool sach_jhooth represents "<<sach_jhooth<<endl;
    cout<<sizeof(bahubali)<<endl;
    cout<<sizeof(long long );                    // long long ki data memory size 8 hoti hai 
    

    
    return 0;                  //  return 0: A return 0 means that the program will execute successfully 
                               //and did what it was intended to do.
                               // return 0; k baad vali kuch bhi cheez execute nhi hogi
                               

}




// QUES) Can I write a program in C or in C++ with two main functions?
// ANS) https://stackoverflow.com/questions/1990932/two-main-functions-in-c-c

// TELLS US THAT, WE MAY HAVE A NEW MAIN FUNCTION IF WE DECLARE A NEW 
// USER DEFINED NAMESPACE