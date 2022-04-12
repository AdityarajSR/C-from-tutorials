//                     // OBJECTS KA ARRAY KAISE BANATE HAI 

// // CLASS BANANE KA MATLAB YE HAI KI HUM EK NAYA DATATYPE BANA RAHE HAI                              
//                                         // PART A
// #include <iostream>
// using namespace std;
// // ONE BIG AND MAJOR DOUBT CLEARED THAT PRIVATE VALUES KO BAS FUNCTIONS K THROUGH ACCESS KIYA JA SAKTA HAI
// // NA KI DIRECTLY IN the int main function/////////////////-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
// class Employee{
//     int id;
//     int salary;
//     public:
//         void setId(void){
//             salary = 122;
//             cout<<"Enter the id of employee";
//             cin>>id;
//         }

//         void getId(void){
//             cout <<"The id of this employee is " <<id <<endl;
//         }

// };

// int main(){
//     // Ye tab hoga jab hamare pas bohot kam employees hai 
//     // Employee harry, lovish, rohan, shruti;
//     // harry.setId();
//     // harry.getId();
//     // return 0;

//     // AB AGAR TUM 1000 EMPOYEES(object) KA DATA STORE KARNE JAAOGE THEN NEECHE VALA TARIKA USE KARNA BEHTAR RAHEGA
//                                         //  -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-   //
    

//         //   HERE COMES THE NEW THING TO LEARN AS TOLD ABOVE
//     Employee FB[4];
//     for (int i = 0; i < 4; i++)
//     {
//         // FB[i].getId();
//         // FB[i].setId();         yaha par pehle getid run kara toh us object ko garbage value mil gayi

//         FB[i].setId();
//         FB[i].getId();
//     }
    
//     return 0;
// }



///////////////////////////////////////////////////////////////////////////////////////////////////////////


                                            // PART B
                    // Ye thoda kam samajh mein aaya hai 
                    //   need To read article from gfg and cpp.reference
#include<iostream>
using namespace std;

class complex{
    int a;
    int b;
    int za;
    int zb;


    public: 
        void setData(int v1, int v2){
            a = v1;
            b = v2;
        }

        void setDataBySumA(complex o1, complex o2){          // will give garbage values to us
            za = o1.a + o2.a;
            zb = o1.b + o2.b;
        }
        void setDataBySumB(complex o1, complex o2){           // arguments will be taken as the objects of the class
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }

        void printNumber(){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

int main(){
    complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

    c3.setDataBySumA(c1, c2);
    c3.printNumber();
    c3.setDataBySumB(c1, c2);
    c3.printNumber();

    
    return 0;
}


