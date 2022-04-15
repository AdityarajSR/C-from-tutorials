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
    // my own sort function FOR ASCENDING ORDER {O(n^2) VALA SORT}
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i]>a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }
    // my own sort function FOR DESCENDING ORDER {O(n^2) VALA SORT}
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i]<a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}


