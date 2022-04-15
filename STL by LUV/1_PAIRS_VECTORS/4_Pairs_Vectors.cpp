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
    vector <int> v1;
    v1.push_back(34);
    v1.push_back(76);
    printvector(v1);

    vector <int> v2 = v1;   // O(n)  Time Complexity
    v2.push_back(90);
    printvector(v1);
    printvector(v2);
    // printvector(v2);  // O(1) Time Complexity

    return 0;
}