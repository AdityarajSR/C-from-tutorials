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
    sort(a, a+n);
    for (int i = 0; i < n; i++)
    {
        cout<<(*(a+i))<<" ";
    }
    
    
    return 0;
}