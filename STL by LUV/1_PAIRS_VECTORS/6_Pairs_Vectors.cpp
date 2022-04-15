#include <bits/stdc++.h>
using namespace std;

void printvector_1(vector <int> v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }     
    v.push_back(2);  // no EFFECT SEEN (PASSED A COPY)
    cout<<endl;
}

void printvector_2(vector <int> &v){   // passing using reference variables
                                         // AS COPY IS NOT MADE 
                                         // DIRECTLY, WE GO TO THE ADDRESS
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }     
    v.push_back(2);  // EFFECT of pushback seen       
    cout<<endl;
}

int main(){
    vector <int> v1;
    v1.push_back(34);
    v1.push_back(76);
    printvector_2(v1);

    vector <int> &v2 = v1;   // v2 k changes v1 mein bhi reflect honge
                             // KYOKI IDHAR HUMNE SEEDHE ADDRESS PAR JAA KAR
                            //  CHANGES KARE HAI 
    v2.push_back(90);
    v1.push_back(696);
    printvector_2(v1);
    printvector_2(v2);
    // printvector_1(v2);  // O(1) Time Complexity

    return 0;
}