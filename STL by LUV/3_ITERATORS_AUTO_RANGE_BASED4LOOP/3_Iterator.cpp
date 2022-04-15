#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v {2, 5, 8, 9};
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    vector<int> :: iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    // INTRO TO RANGE BASED 4 LOOP
    for(int value : v){  // COPIES OF v are made
                         // inside the variable value 
        cout<<value<<" ";
    }
    return 0;
}