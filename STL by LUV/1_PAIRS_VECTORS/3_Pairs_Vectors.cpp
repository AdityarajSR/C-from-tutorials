#include <bits/stdc++.h>
using namespace std;

void printvector(vector <int> v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector <int> v1(5);
    printvector(v1);
    
    vector <int> v2(5, 69);
    v2.push_back(4);
    v2.push_back(56);
    printvector(v2);
    v2.pop_back();
    printvector(v2);  // O(1) Time Complexity

    return 0;
}