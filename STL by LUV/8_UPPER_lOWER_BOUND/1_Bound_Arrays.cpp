#include <bits/stdc++.h>
using namespace std;

// INTROSORT = QUICKSORT + HEAPSORT + INSERTION SORT

int main(){
    // {sort({address of 1st element},{address of last element + 1})}
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout<<(*(a+i))<<" ";
    }
    cout<<endl;
    sort(a, a+n);      // SORTED LIST IS A MUST FOR THIS CONCEPT
    // WHAT IS LOWER BOUND
    int* ptr = lower_bound(a, a+n, 5);
    cout<<*ptr<<endl;

    // WHAT IS UPPER BOUND
    int* ptris = upper_bound(a, a+n, 5);
    cout<<*ptris<<endl;
    
    
    return 0;
}