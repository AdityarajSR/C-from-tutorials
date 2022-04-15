#include <bits/stdc++.h>
using namespace std;
                        //  ON ONLINE WEBSTES (FOR CONTIGUOUS MEMORY ALLOCATION)
// FOR A LOCAL VECTOR 10^5 KI ORDER SE ZYADA NAHI LE SAKTE HAI 
// FOR A GLOBAL VECTOR 10^7 KI ORDER SE ZYADA NHI LE SAKTE HAI 

void printvector(vector <int> v){
    cout<<"sizeis : "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        // v.size(); // O(1) Time Complexity
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int> v1;
    int sizeis = v1.size();
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cout<<"Enter the number : ";
        cin>>x;
        printvector(v1);
        cout<<endl;
        v1.push_back(x);   // O(1) Time Commplexity
    }
    printvector(v1);
    cout<<endl;
    
    
    return 0;
}
