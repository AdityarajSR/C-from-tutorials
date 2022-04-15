#include <bits/stdc++.h>
using namespace std;

// INTROSORT = QUICKSORT + HEAPSORT + INSERTION SORT

// THIS IS THE COMPARATOR FUNCTION THAT WE HAVE MADE HERE (INCREASING ORDER)
bool should_i_swap(int a, int b){
    if(a>b) return true;
    return false;
}
int main(){
    // {sort({address of 1st element},{address of last element + 1})}
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(should_i_swap(a[i], a[j])){
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


