#include <iostream>
using namespace std;

int main()
{
    // BASIC EXAMPLE 1
    int a = 4;
    int* ptr = &a;          // int* is data type to store address 
    cout << "The value of a is " << *(ptr) << endl;

    // BASIC EXAMPLE 2
    float *p = new float(40.78);
    cout << "The value at address p is " << *(p) << endl;

    // BASIC EXAMPLE 3
    int *arr = new int[3];
    // arr[0] = 10;
    *(arr + 0) = 10;
    arr[1] = 20;
    arr[2] = 30;
    // delete[] arr;      // IS ARRAY arr KI MEMORY mein se sab gayab ho gaya
                      // JO DYNAMICALLY ALLOCATE KIYA GAYA THA  
                     

    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;

    return 0;
}
