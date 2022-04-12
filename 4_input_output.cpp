#include<iostream>
using namespace std;

int main(){
    int num1, num2;
    int num3;
    int num4;

    cout<<"Enter the value for num1 :\n";      // cout helps in displaying our message into the terminal 
    cin>>num1;     // cin will take input data from the user 
                   // baically '>>' is called the extraction operator

    cout<<"Enter the value for num2 :\n";
    cin>>num2;
    cout<<"The value of num1 + num2 is : "<<num1 + num2<<"\n";
    // cout<<num3; , agar ise run karunga toh it will give something else(the address of num3 in the device memory)
    cout<<"enter the value for num4 "<<endl;
    cin>>num4; 
    cout<<"enter the value for num3 "<<endl;
    cin>>num3;
    cout<<"The sum of num3 and num4 is "<<num3 + num4;
    return 0;


}
