#include <bits/stdc++.h>
using namespace std;

// INTROSORT = QUICKSORT + HEAPSORT + INSERTION SORT

// THIS IS THE COMPARATOR FUNCTION THAT WE HAVE MADE HERE (DECREASING ORDER OF FIRST ELEMENT)
bool should_i_swap(pair<int, int> a, pair<int, int> b){
    if(a<b) return true;
    return false;
}
int main(){
    // {sort({address of 1st element},{address of last element + 1})}
    int n;
    cin>>n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i].first>>a[i].second;
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
        cout<<a[i].first<<" "<<a[i].second<<endl;
    }
    return 0;
}


