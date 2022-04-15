#include <bits/stdc++.h>
using namespace std;

/* it++ operation can be done
it + 1 can't be done in iterators bcoz iterators
are not stored in contiguous memory blocks inside the memory 
which is not the case in arrays */

int main(){
    vector <int> v = {1, 2, 3, 4, 5};
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // DECLARING AN ITERATOR (POINTER in case of vectors)
    // vector <int> :: iterator it;
    vector <int> :: iterator it = v.begin();
    // cout<<(*(it))<<" "<<*(it+1);
// Method 1 to print all the elements of vector
    for (int i = 0; i < v.size(); i++)
    {
        cout<<(*(it + i))<<" ";
    }
// Method 2 to print all the elements of vector
    for (it = v.begin(); it < v.end(); it++)
    for (it = v.begin(); it != v.end(); it++)
    {
        cout<<(*(it));
    }
    
    return 0;
}