#include <iostream>
using namespace std;

int main(){
    // int marks[] = {1, 2, 3, 4, 5};
    // cout <<"The marks are as follows "<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<marks[4]<<endl;

// // Yaha par maine iski range 4 tak hi le rakhi hai but ye kahi aur tak jaa rrahi hai
//             //   jaha tak elements de raha hoon ye to vaha tak accept kar raha has_virtual_destructor
//             //                       ye galat hai !!!!
    int mathmarks[4];
    mathmarks[0] = 123;
    mathmarks[1] = 323;
    mathmarks[2] = 423;
    mathmarks[3] = 523;
    mathmarks[4] = 623;
    mathmarks[5] = 723;
    mathmarks[6] = 823;

    cout<<"The maths marks are as follows "<<endl;
    cout<<mathmarks[0]<<endl;     
    cout<<mathmarks[1]<<endl;     
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;
    cout<<mathmarks[4]<<endl;
    cout<<mathmarks[5]<<endl;
    cout<<mathmarks[6]<<endl;

// int mathmarks[4];
// mathmarks[0] = 10;
// mathmarks[1] = 11;
// mathmarks[2] = 12;
// mathmarks[3] = 13;

// cout<<mathmarks[0]<<endl;
// cout<<mathmarks[1]<<endl;
// cout<<mathmarks[2]<<endl;
// cout<<mathmarks[3]<<endl;
    
    

                      // FINDING OUTPUT USING LOOP
                    //   {PRINTING ELEMENTS OF AN ARRAY USING LOOOPS}

    // 1) USING FOR LOOP
    cout<<"NOW USING FOR LOOP"<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of mathmarks for student "<<i << " is "<<mathmarks[i]<<endl;
        
    }
    cout<<endl;
    // 2) USING WHILE LOOP
    cout<<"NOW USING WHILE LOOP"<<endl;
    int iN = 0;
    while (iN<4){
        cout<<"The value of mathmarks for student "<<iN << " is "<<mathmarks[iN]<<endl;
        iN++;    
    } 

    cout<<endl;
    // 3) USING DO WHILE LOOP
    cout<<"NOW USING DO WHILE LOOP"<<endl;
    int iA = 0;
    do {
        cout<<"The value of mathmarks for student "<<iA << " is "<<mathmarks[iA]<<endl;
        iA++;
    } while (iA<4);
    cout<<endl;
    









    return 0;


}