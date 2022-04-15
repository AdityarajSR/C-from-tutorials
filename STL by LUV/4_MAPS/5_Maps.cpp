                                  //    n = map size                    
#include <bits/stdc++.h>
using namespace std;

/*         DIFFERENCE BETWEEN ORDERED MAPS AND unordered_map
1) different data structures used inbuilt operations
2) Time complexity changes to O(1) in case of unordered_maps due to 
use of hash functions
3) valid data types to be used in unordered_map are only the basic data types */

void printmap(unordered_map <int, string> mapis)
{
    cout<<mapis.size()<<endl;
    for (auto &value : mapis)
    {
        cout << value.first << " " << value.second << endl;         
    }  
}
                 //UNORDERED MAPS use hash tables for inbuilt implementation
int main()
{
    unordered_map<int, string> m; // Looks similar to pairs
    m[1] = "abc";  // INSERTION = O(1)
    m[5] = "def";    
    m[3] = "ghi";    
    m[9] = "jkl";

// find FUNCTION 
    auto it = m.find(5);   // O(1) time complexity
    if (it == m.end())
    {
        cout<<"Given key is not present "<<endl;
    }
    else{
        cout<<it->first<<" "<<it->second<<endl;
    }    
    cout<<endl;

// erase FUNCTION
    m.erase(1);          // O(1)  time coomplexity
    cout<<endl;
    printmap(m);
    
    return 0;
}        
