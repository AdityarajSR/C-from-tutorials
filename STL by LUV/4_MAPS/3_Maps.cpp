                                  //    n = map size                    
#include <bits/stdc++.h>
using namespace std;

void printmap(map<int, string> mapis)
{
    cout<<mapis.size()<<endl;
    for (auto &value : mapis)
    {
        cout << value.first << " " << value.second << endl;
    }  
}

int main()
{
    map<string, string> m; 
    // m[1] = "abc";  
    // m[5] = "def";    
    // m[3] = "ghi";    
    // m[9] = "jkl";
    // m[1] = "hehehehehe";   

    /*IF I TAKE STRING INSIDE THE KEY 
    THEN */
    m["sffsfsfs"] = "newvalue";   /* { m.size() * log(n) } */


    
    
    return 0;
}