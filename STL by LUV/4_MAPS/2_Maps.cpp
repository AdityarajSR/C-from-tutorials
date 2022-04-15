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
            // ORDERED MAPS USE TREES FOR IMPLEMENTATION(RED BLACK TREES)
int main()
{
    map<int, string> m; // Looks similar to pairs
    m[1] = "abc";  // INSERTION = O(log(n))
    m[5] = "def";    
    m[3] = "ghi";    
    m[9] = "jkl";
    m[1] = "hehehehehe";   //Since each key is unique so we 
                           //the value corresponding to the
                           // key will get overwritten 

// find FUNCTION 
    auto it = m.find(5);
    if (it == m.end())
    {
        cout<<"Given key is not present "<<endl;
    }
    else{
        cout<<it->first<<" "<<it->second<<endl;
    }    

    auto iter = m.find(53);   // O(log(n))
    if (iter == m.end())
    {
        cout<<"Given key is not present "<<endl;
    }
    else{
        cout<<iter->first<<endl;
    }
    cout<<endl;

// erase FUNCTION
    // METHOD 1 
    m.erase(1);
    printmap(m);
    cout<<endl;

    // METHOD 2
    auto iteris = m.find(9);
    if (iteris != m.end())  
    {
        // O(log(n))
        m.erase(iteris);   //gives segmentation fault if key is not present without
                      // if condition used 
    }
    printmap(m);
    cout<<endl;
// clear FUNCTION
    printmap(m);
    
    
    
    return 0;
}