#include <iostream>
using namespace std;

int main(){
    pair<int, string> p;
    p = make_pair(69, "baburao");
    cout<<p.first<<" "<<p.second<<endl;

    pair<int, string> q;
    q = {12, "nextbaburao"};
    cout<<q.first<<" "<<q.second<<endl;

    pair<int, string> qnew = q;
    qnew = {12, "nextbaburao"};
    qnew.first = 36;
    cout<<qnew.first<<" "<<qnew.second<<endl;

// NOT UNDERSTOOD THIS ONE
    pair<int, string> &qnew1 = q;
    qnew1 = {12, "nextbaburao"};
    qnew1.first = 56;
    cout<<q.first<<" "<<q.second<<endl;

///////////////////////////////////////////////////////////////////////////////////////////////////////////
// TO SHOW WHY WE USE PAIRS(WHEN WE WANT TO RELATE TWO VARIABLES OR INFORMATIONS)
    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};

    pair <int , int> pairOFarray[3];
    pairOFarray[0] = {1, 4};
    pairOFarray[1] = {2, 5};
    pairOFarray[2] = {3, 6};

    for (int i = 0; i < 3; i++)
    {
// TOTALLY WRONG // cout<<*(pairOFarray + i)->first<<" "<<*(pairOFarray + i)->second<<endl;
        // cout<<pairOFarray[i].first<<" "<<pairOFarray[i].second<<endl;
        // cout<<(pairOFarray+i)->first<<" "<<(pairOFarray+i)->second<<endl;
        cout<<(*(pairOFarray + i)).first<<" "<<(*(pairOFarray + i)).second<<endl;
    }
    swap((*(pairOFarray)),(*(pairOFarray + 2)));    // INBUILT SWAP FUNCTION
    cout<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<(*(pairOFarray + i)).first<<" "<<(*(pairOFarray + i)).second<<endl;
    }
    return 0;        
}

