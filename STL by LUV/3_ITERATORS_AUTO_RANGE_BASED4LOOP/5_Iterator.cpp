#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v = {1, 2, 3, 4, 5};
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // DECLARING AN ITERATOR (POINTER in case of vectors)
    vector <int> :: iterator it = v.begin();
    // cout<<(*(it))<<" "<<*(it+1);
// Method 1 to print all the elements of vector
    for (int i = 0; i < v.size(); i++)
    {
        cout<<(*(it + i))<<" ";
    }
// Method 2 to print all the elements of vector
    // for (it = v.begin(); it < v.end(); it++)
    for (it = v.begin(); it != v.end(); it++)
    {
        cout<<(*(it));
    }
    
    return 0;
}