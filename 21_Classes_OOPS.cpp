                //    VVI 
                    // FILE NAME KE ANDAR SPECIAL CHARACTERS NHI USE KARNA HAI 
                    //         ERROR MIL JAATA HAI{{{{{FOR EXAMPLE        "&"     }}}}}


// Ques.) NOW THE FIRST QUESTION COMES WHY DO WE USE OOP inspite of having structures in c++known  as STRUCT
// Ans.)  HERE ARE SOME REASONS FOR THE ABOVE QUESTION
//     1)Agar sirf database chahiye ya data hold karna ho then struct is enough for us to use.
//     2)STRUCTURE K ANDAR KOLI FUNCTION NHI DAAL SAKTE 
//     3)Struct se developed material ya data koi bhi access kar sakta hai but if we want to have our data secure
//       then we need to use THE CONCEPT OF CLASS AND OBJECTS AS IT HAS PUBLIC AND PRIVATE ACCESS SPECIFIERS

#include <iostream>
using namespace std;

class Employee
{
    private:                           //(private vale k andar ka function hi private ka data access kar sakta hai) ***PRIVATE SPECIFIERS***
        int a, b, c;
    public:
        int d, e;
//  yaha par koi bhi function class k andar bhi ban sakta hai aur aur class ke bahar bhi 

        void setdata(int a1, int b1, int c1);       // DECLARATION{AAGE JAA KAR RETURN MILEGA, YAHA PAR NHI}
        void getdata(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};

void Employee :: setdata(int a1, int b1, int c1){                      // Scope resolution operator used here 
                                                                      // yaha par a1, b1, c1 ko as arguments liye hai
                                                                     //and vo values ko hum a, b, c mein insert kar denge using
                                                                    // the setdata function 
    a = a1;
    b = b1;
    c = c1;
}


int main(){
    Employee Aditya;
    // Aditya.a = 56;       Ye line execute karne par error milega kyoki private 
                            // values ko access nhi kiya ja sakta 
    Aditya.d = 45;
    Aditya.e = 55;   //  _ _ _ _ _ _ _ _ _ _ _ _ _ 
    // cout<<Aditya.a;  |_-_-_-_-_-_-_-_-_-_-_-_-_|  member "Employee::a" (declared at line 19) is inaccessibleC/C++(265)
    Aditya.setdata(1, 2, 4);
    Aditya.getdata();          // gives garbage value if I don't give value to d and e beforehand
    cout<<endl;   
///////////////////////////////////////////////////////////////////////////////////////////////////////////

    Employee Baburao;                    
    Baburao.setdata(3,5,8);                     //You will need to enter the data inside setdata function
    Baburao.getdata();                                // or you get an error definitelyy
    cout<<endl;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
    Employee Baburaokabeta;
    Baburaokabeta.getdata();            // isko run karne par sabhi ki garbage values hi milengi 
                                         // kyoki othing has been specified earlier

    
    Employee Pranav;
    Pranav.setdata(3,4,5);
    Pranav.getdata();
    cout<<endl;
    // Pranav.a = 34;                   SHOWS INACCESSIBLE SPECIFIER
    Pranav.d = 345;
    Pranav.getdata();

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////

// // OOPs - Classes and objects
////////////////////////////////

// // C++ --> initially called --> C with classes by stroustroup
// // class --> extension of structures (in C)
// // structures had limitations
// //      - members are public
// //      - No methods
// // classes --> structures + more
// // classes --> can have methods and properties
// // classes --> can make few members as private & few as public
// // structures in C++ are typedefed
// // you can declare objects along with the class declarion like this:
// /*  class Employee{
//             // Class definition
//         } harry, rohan, lovish;         */ -----------> not used much + not recommended 
// // harry.salary = 8 makes no sense if salary is private

// // Nesting of member functions


///////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////
        //   APAN LOG FUNCTION CREATE KARKE PRIVATE KE ANDAR NHI DAAL SAKTE HAI 


// #include <iostream>
// using namespace std;

// class Employee
// {
//     private:                           //(private vale k andar ka function hi private ka data access kar sakta hai)
//         int a, b, c;
//         void setdata(int a1, int b1, int c1);       // DECLARATION{AAGE JAA KAR RETURN MILEGA, YAHA PAR NHI}
//         void getdata(){
//             cout<<"The value of a is "<<a<<endl;
//             cout<<"The value of b is "<<b<<endl;
//             cout<<"The value of c is "<<c<<endl;
            
//     // public:
//         int d, e;
//         cout<<"The value of d is "<<d<<endl;
//         cout<<"The value of e is "<<e<<endl;
// //  yaha par koi bhi function class k andar bhi ban sakta hai aur aur class ke bahar bhi 

        
//         }
// };

// void Employee :: setdata(int a1, int b1, int c1){
//     a = a1;
//     b = b1;
//     c = c1;
// }


// int main(){
//     Employee Aditya;
//     // Aditya.a = 56;       Ye line execute karne par error milega kyoki private 
//                             // values ko access nhi kiya ja sakta 
//     Aditya.d = 45;
//     Aditya.e = 55;
//     Aditya.setdata(1, 2, 4);
//     Aditya.getdata();          // gives garbage value if I don't give value to d and e beforehand
//     cout<<endl;
// ///////////////////////////////////////////////////////////////////////////////////////////////////////////

//     Employee Baburao;                    
//     Baburao.setdata(3,5,8);                     //You will need to enter the data inside setdata function
//     Baburao.getdata();                                // or you get an error definitelyy
//     cout<<endl;

// //////////////////////////////////////////////////////////////////////////////////////////////////////////
//     Employee Baburaokabeta;
//     Baburaokabeta.getdata();            // isko run karne par sabhi ki garbage values hi milengi 
//                                          // kyoki othing has been specified earlier

    
//     return 0;
// }
