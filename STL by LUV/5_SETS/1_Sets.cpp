#include <bits/stdc++.h>
using namespace std;
//.begin() -> Returns an iterator pointing to the first element of the set
//.end()  -> Returns an iterator pointing next to the last element of the set
//.rbegin() -> Returns a reverse iterator pointing to the last element of the set
//.rend() -> Returns a reverse iterator pointing before the first element of the set

/*
map -> sorted unique keys...different keys can point to same value..O(log n)..red black tree
unordered_map -> unsorted unique keys..different keys can point to same value..O(1)..hashing...u cannot use it for complex data type like pair,set..
multimap -> a key pointing to more than one value...O(1)..Red black tree
Unordered_set -> unsorted unique values..no key..O(1)..hashing...u cannot use it for complex data type like pair,set..
multiset -> Duplicate values are allowed...O(log n)..red black tree...u can use this instead of priority queues
*/ 

void printset(set<string> &s)
{     
    // set -> sorted unique values..no key..O(log n)..red black tree
    cout<<"Size: "<<s.size()<<endl;
    for(auto value:s)
        cout<<value<<endl;
    cout<<endl;
}
// void printset(set<string> &s)
// {     
//     for (auto it = s.begin(); it != s.end(); it++)
//     {
//         cout<<(*it)<<endl;
//     }
    
// }

int main()
{   
    //set follows red black tree implementation...so almost all operations will take O(log n) time
    set <string> s;
    s.insert("abc");//O(log n)
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("xoxo");
    s.insert("abc");//this will be ignored..coz set stores unique values
    printset(s);

    auto it = s.find("abc");     // O(log(n))
    if (it != s.end())
    {
        cout<<(*it);
    }
///////////////////////////////////////////////////////////////////////////////////////////////////////////
    // METHOD 1
    auto it = s.find("abc");     // O(log(n))
    if (it != s.end())
    {
        s.erase(it);
    }
    
    // METHOD 2
    s.erase("zsdf");
    
   return 0;
}

