// POINTER ARITHMETIC

// NEW ADDRESS = CURRENT ADDRESS + i* SIZE OF DATA TYPE

#include <iostream>
using namespace std;

int main(){
    int marks[] = {1, 2, 3, 4, 5};
    cout <<"The marks are as follows "<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;

    // USING POINTERS AND ARRAYS
    // int p = marks; //{UNCOMMENT THIS ONE AND SEE THE ERROR AT ALL THE MARKING POINTS AVAILABLE}
    int* p = marks;              ////////// marks denotes &marks[0]  /////////
    // cout<<*(p++)<<endl;
    // cout<<*(++p)<<endl;

    cout<<"The value of *p {that is marks[0]}is "<<*p<<endl;
    cout<<"The value of *(p+1) {that is marks[1]} is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) {that is marks[2]} is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) {that is marks[3]} is "<<*(p+3)<<endl;
  

//    &x will give address of some variable x
//          while int* p = x gives the value at a specified index



    return 0;





}