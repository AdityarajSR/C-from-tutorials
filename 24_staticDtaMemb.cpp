                                            /* VIDEO NUM. -- 24*/
                             // STATIC DATA MEMBERS AND METHODS IN C++ OOPS //                           

#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;
// TO GIVE SOME INITIAL VALUE TO COUNT GO DOWNWARDS

// Static int count isliye use kiya gaya taaki vo ek class ki property k taur par use kari jaa sake 
//  na ki as a property of an object 
// Agarr normal int use karenge to har object apna ek alag sa count chalu kar dega 
//      isliye static int banakar us variable ki value pure int main k andar kisi bhi object mein pass and increment 
//         hote jaayegi

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void){
        // cout<<id; // throws an error--------> This STATIC FUNCTION CAN USE ONLY STATIC IDENTIFIER
        cout<<"The value of count is "<<count<<endl;
    }
// UPAR vali line mein ek static function banaya gyaa hai and ek static function bas static variables ko hi
//  ACCESS kar sakta hai 

};

// Count is the static data member of class Employee
// int Employee::count; // Default value is 0
int Employee::count = 1000; // Default value is 1000


// normally koi bhi value assign kari jayegi kisi bhi objecct ko using some info, then vo
//  har ek object k liye change hote jaati hai 
//  But static variable kya karta hai ki sabhi objescts k liye same continued count rakhta hai and vo pass on karta hai unllike 
//  normal variables

// BASICALLY IN NORMAL WORDS YE BATAYA JA RAHA HAI KI STATIC VARIABLE KISI OBJECT KI PROPERTY NHI HOTI 
// BALKI VO EK CLASS KI PROPERTY BAN JAATI HAI UNLIKE NORMAL VARIABLESS , THUS THE COUNT GOES ON PASSING 
// STATIC VARIABLE JO HAI VO TAB TAK ZINDA RAHEGA JAB TAK PROGRAM TERMINATE NHI HO JAATA HAI 

int main()
{
    Employee harry, rohan, lovish;
    // harry.id = 1;
    // harry.count=1; // cannot do this as id and count are private

    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lovish.setData();
    lovish.getData();
    Employee::getCount();

    return 0;
}
// STATIC INT KA SCOPE YA VISIBILITY USS CLASS MEIN HI REHTI HAI 
//     BUT USKA LIFETIME PURE PROGRAM MEIN REHTA HAI 