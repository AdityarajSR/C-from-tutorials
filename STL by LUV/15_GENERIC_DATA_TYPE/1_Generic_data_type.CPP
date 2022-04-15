                //  USING GENERIC DATA TYPE
#include<iostream>
using namespace std;

template <class T>
T usermin(T a, T b){
    return((a<b)?a:b);
}

int main(){
    int i = 34, j = 32;
    cout<<usermin(i, j)<<endl;
    char a = 'a', A = 'd';
    cout<<usermin(A, a);
    return 0;
}