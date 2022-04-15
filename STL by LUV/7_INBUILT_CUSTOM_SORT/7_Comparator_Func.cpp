// IN CASE OF inbuilt sort given in stl
// AGAR SWAP KARNA HAI TO FALSE RETURN KARNA HOGA
// AUR AGAR SWAP NHI KARNA HAI TO TRUE RETURN KARNA HOGA

// IN SIMPLE WORDS --> INBUILT SORT FOLLOWS SWAPPING IN AN OPPOSITE MANNER 
// TO THAT OF SORTING FUNCTION MADE BY US

#include <bits/stdc++.h>
using namespace std;

// METHOD 1
bool comporator_func(pair<int, int> a, pair<int, int> b){
    if (a.first != b.first)
    {
        if (a.first>b.first) return false ;
        return true;      
    }
    else{
        if (a.second<b.second) return false;
        return true;
    }
}
///////////////////////////////////////////////////////////////
// MEHOD 2 (JO ORDER DESIRED HAI VAHI DAAL DO
// AGAR DESIRED ORDER MILA TO true
// NAHI TO FALSE RETURN HOGA AUR SWAP HO JAAYEGA)

bool comporator_func_ALT(pair<int, int> a, pair<int, int> b){
    if (a.first != b.first)
    {
        return a.first < b.first;      
    }
    else{
        return a.second > b.second;
    }
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

    // sort(a.begin(), a.end(), comporator_func);
    sort(a.begin(), a.end(), comporator_func_ALT);

    
    for (int i = 0; i < n; i++)
    {
        cout<<a[i].first<<" "<<a[i].second<<endl;
    }
    return 0;
}


