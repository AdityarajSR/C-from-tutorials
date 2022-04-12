                                    //  LOOPS IN C++
# include<iostream>
using namespace std;
int main(){
///////////////////////////////////////////////////////////////////////////////////////////////////////////
// 1) FOR LOOP 

                              // Syntax for FOR LOOP
    // for (initialization; condition; updation)
    // {
    //     loop body(C++ code)

    // }

                              // Working of for LOOp example
        // Finite Loop
    for (int i = 0; i<11; i++)
    {                 
        cout<<i<<endl;
    }                 

    // IT CAN ALSO BE DONE IN THE BELOW SHOWN METHOD 
    for (int i = 0;  cout<<i++<<endl;)
    {                 
        
    }                 


    ///////////////////////////////////////////////////////////////////////////
    // return 0;

        // InFinite Loop
    for (int a = 0; 34<=40; a++)
    {
        cout<<a<<endl;
    }

///////////////////////////////////////////////////////////////////////////////////////////////////////////
                                  //WHILE LOOPS IN C++ programming

                                  // Syntax for WHILE LOOP
    // while (codition){

    //     c++ statements;
    // }
                            // Example of FINITE WHILE LOOP
    int b = 1;
    while(b<= 41){
        cout<<b<<endl;
        b++;
            
    }
    ///////////////////////////////////////////////////////////////////////////
                            // Example of INFINITE WHILE LOOP
    int d = 1;
    while (true){
        cout<<(d*d)<<endl;
        d++;
    }

    ///////////////////////////////////////////////////////////////////////////////////////////////////////
                                          // DO WHILE LOOP IN C++
    int f = 1;
    do {
        cout<<f<<endl;
        f++;
    }while(false);

    return 0;


}

///////////////////////////////////////////////////////////////////////////////////////////////////////////

//                                 //   prastic i am doing 

// #include <iostream>
// using namespace std;

// int main(){
//     int i;
//     for( i = 0; i < 34 ; i = i + 2){
//         cout<<i<<endl;
//         // cout<<endl;      isko uncomment karke output dekhna {ye bhi loop k har ek part mein run hoga}
//     }


//     cout<<endl;
//     i = 1;
//     while(i<34){                                 
//         cout<<i<<endl;
//         i = i + 3;
//     }
    



//     return 0;
// }

