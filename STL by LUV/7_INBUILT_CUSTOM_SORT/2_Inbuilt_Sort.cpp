#include <bits/stdc++.h>
using namespace std;

// INTROSORT = QUICKSORT + HEAPSORT + INSERTION SORT

int main(){
    // {sort({address of 1st element},{address of last element + 1})}
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    // sort(a.begin()+2, a.end());
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}


