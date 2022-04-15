#include <bits/stdc++.h>
using namespace std;

// INTROSORT = QUICKSORT + HEAPSORT + INSERTION SORT

int main()
{
    // {sort({address of 1st element},{address of last element + 1})}
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    sort(v.begin(), v.end()); // SORTED LIST IS A MUST FOR THIS CONCEPT
    // WHAT IS LOWER BOUND
    auto it = lower_bound(v.begin(),v.end(), 5);
    cout << *it << endl;

    // WHAT IS UPPER BOUND
    auto it = upper_bound(v.begin(),v.end(), 5);
    if (it == v.end()){
    cout <<"Not found "<<endl;
    }
    cout<<(*it)<<endl;  
    return 0;
}