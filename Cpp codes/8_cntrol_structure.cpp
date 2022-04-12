/* CONTROL STRUCTURES */
#include <iostream>
using namespace std;
// TYPE 1) CONTROL STRUCTURE
// TYPE 2) SELECTION STRUCTURE
// TYPE 3) LOOP STRUCTURE
int main()
{
    // TYPE 1) CONTROL STRUCTURE
    // A) IF ELSE STATEMENT
    // B) IF ELSE LADDER
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////
    // dono use ho gaye ek saath(MATLAB SAMAJH AA GAYA HAI )

    int age;
    cout << "Tell me your age " << endl;
    cin >> age;
    if (age < 18)
    {
        cout << "You are a kid and will be kicked out if you enter in the party hall" << endl;
    }
    else if (age == 18)
    {
        cout << "You wiil be allowed to come in only if you have a pass" << endl;
    }
    else
    {
        cout << "You are welcomed to our party sir." << endl;
    }
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////
    // C) SWITCH-CASE
    int ages;
    cout << "Tell me your ages or i will kill you :" << endl;
    cin >> ages;
    switch (ages)
    {
    case 18:
        // cout<<"Your ages is "<<ages;
        cout << "Your ages is 18";
        break;
    case 21:
        cout << "Your ages is 21";
        break;
    case 34:
        cout << "Your ages is 34";
        break;
    case 100:
        cout << "Badhai ho , aapne century maar li hai...";
        break;
        // IF THE INPUT CASE DOES NOT MATCH WITH ANY OF THE GIVEN CASES THEN NOTHING IS SHOWN ON THE TERMINAL

    default:
        break;
    }
    // LOOPS IN THE NEXT PARTss
}