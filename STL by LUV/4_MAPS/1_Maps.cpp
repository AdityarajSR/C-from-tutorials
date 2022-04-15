            //    n = map size
#include <bits/stdc++.h>
using namespace std;
// MAP gives us a key and value mapped to the key
// THE ONE THING THAT IS SIMILAR TO BOTH MAPS AND ITERATORS IS
// SHOWN BELOW
/* it++ operation can be done
it + 1 can't be done in iterators bcoz iterators
are not stored in contiguous memory blocks inside the memory
which is not the case in arrays */
//********** key may be very far away from its value in a map data structue
// MENTOS ZINDAGI

// THE KEYS ARE STORED IN ASCENDING ORDER 

void printmap(map<int, string> mapis)
{
    // to traverse the whole we need O(n(log(n))) time complexity
    // for n elements in the map 
    cout<<mapis.size()<<endl;
    for (auto &value : mapis)
    {
        cout << value.first << " " << value.second << endl;
    }  
    // TO ACCESS EACH ELEMENT WE NEED O(log(n)) time complexity 
    // ACCESS = O(n(log(n)))  
}

int main()
{
    map<int, string> m; // Looks similar to pairs
    m[1] = "abc";  // INSERTION = O(log(n))
    m[5] = "def";    
    m[3] = "ghi";    
    // m[69];         // INSERTION = O(log(n)) as it will automatically store an empty string
    m.insert({4, "jkl"});
    m.insert(make_pair(8, "mno"));
    // AAM ZINDAGI
    map<int, string>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << ((*it).second) << endl;
    }
    cout << endl;
    printmap(m);
    return 0;
}