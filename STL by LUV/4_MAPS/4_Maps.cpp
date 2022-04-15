/* Given N strings, print unique strings
in lexicographical order with their 
frequency 
N <= 10^5
|S| <= 100
AGAR YE  |S| <= 10000 hoga to complexity bohot zyada badi hogi]   */

#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, int> m;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        m[s]++;  // as key can be string also
        // m[s] = m[s] + 1;
    }
    for(auto pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}