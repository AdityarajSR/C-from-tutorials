#include <bits/stdc++.h>
using namespace std;
                        // auto KEYWORD
int main(){
    vector <int> v = {1, 2, 3, 4, 5};
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // NO NEED TO DECLARE ITERATOR with this method 
    for(auto it = v.begin(); it != v.end(); it++){
        cout<<(*it)<< " ";
    }
    cout<<endl;

    // NOW MAKING A VECTOR OF PAIR
    vector<pair<int, int>> vp = {{1, 2}, {5, 6}, {9, 8}};
    // for(auto it = vp.begin(); it != vp.end(); it++){
    //     cout<<((*it).first)<<" "<<((*it).second)<<endl;
    // }

// ******************/* COMBINING AUTO keyword AND RANGE BASED FOR LOOPS */********************************

    // for(auto value : vp){       // To create copies and then pass
    for(auto &value : vp){     // To pass by reference using reference variables
        cout<<value.first<<" "<<value.second<<endl;
    }
    return 0;
}