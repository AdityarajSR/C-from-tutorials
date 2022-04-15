#include <bits/stdc++.h>
using namespace std;

// ARRAYS AND VECTORS K LIYE YE COMPLEXITY O(n) HOTI HAI INKI COMPLEXITY FOR TIME 
// MAPS AND SETS K CASE MEIN YAHI COMPLEXITY O(LOG(N)) HOTI HAI 

// THIS IS FOR VECTORS
int main(){
    int n;
    vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }
    for(int i = 0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    reverse(v.begin(), v.end());
    for(auto value : v){
        cout<<value<<" ";
    }
    cout<<endl;

    string str;
    str = "abcdefghijkl";
    reverse(str.begin(), str.end());
    // ADDRESS PAR JAGAH REVERSE HOGA (COPY NAHI BANEGI)
    for(auto valueis : v){
        cout<<valueis<<" ";
    }
    cout<<endl;
    return 0;
}