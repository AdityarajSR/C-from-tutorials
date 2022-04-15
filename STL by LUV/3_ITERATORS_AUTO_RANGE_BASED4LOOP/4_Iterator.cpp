#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v {2, 5, 8, 9};

// THIS DOES NOT HELP US TO INCREMENT THE " value " 
    for(int value : v){  // COPIES OF v are made
                         // inside the variable value 
        value++ ;
        // cout<<value<<" ";
    }

// THIS HELPS US TO INCREMENT THE " value " 
    for(int &value : v){  // COPIES OF v are made
                         // inside the variable value 
        value++ ;
        // cout<<value<<" ";
    }

    for(int value : v){
        cout<<value<<" ";    
    }
    cout<<endl;

///////////////////////////////////////////////////////////////////////////////////////////////////////////
    vector <pair<int, int>> v_p = {{1, 2},{4, 5}, {9, 8}};
    for(pair<int, int> value : v_p){
        cout<<value.first<<" "<<value.second<<endl;
    }
    return 0;
}