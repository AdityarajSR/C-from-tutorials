// THIS IS FOR VECTORS

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    
    int min = *(min_element(v, v+n));
    int max = *(max_element(v, v+n));
    int min_from_3 = *(min_element(v, v+n));

    cout<<min<<endl;
    cout<<max<<endl;
    cout<<min_from_3<<endl;
    ///////////////////////////////////////////////////////////////////////////////////////////////////////

    int sumis = accumulate(v, v+n, 10);
    cout<<sumis<<endl;

    int count_of_element = count(v, v+n, 8);
    cout<<count_of_element<<endl;

    int find_element_address = *(find(v, v+n, 8));
    // returns an iterator in the case of a vector 
    // while returns a pointer in the case of array
    cout<<find_element_address<<endl;

    return 0;
}