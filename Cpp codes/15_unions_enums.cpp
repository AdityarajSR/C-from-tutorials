// // // 3)                         USE IN UNIONS

// # include<iostream>
// using namespace std;

// union moneyform
// {
//     int rice;
//     char car;
//     float pounds;

// };

//                                     // UNIONS

// /* IT IS SIMILAR TO THAT OF A STRUCTURE BUT IT HELPS TO DO PROPER MEMORY MANAGEMENT KYOKI GIVEN OPTIONS
//     (jaise address, eID etc ) in sab mein se ek ko hi utilize kiya jayega and the one which uses the 
//          maximum memory uski memory hi use hogi program run karne mein chahe hum koi sa bhi function run kare*/
//     // NOW AN EKJAMPLE
    
//     int main(){
//     // union moneyform m1;
//     // m1.rice = 34;
//     // m1.car = 'c';
//     // cout<<"The value of rice is "<<m1.rice<<endl;   // Yaha par value of rice gets overweited and gives 
//                                                                 //  garbage value 99


//     union moneyform m1;
//     m1.rice = 34;
//     m1.car = 'c';
//     cout<<"The value of car is "<<m1.car<<endl;
//                             //    cN'T REDECLARE NAME OF the variable
//     return 0;

// }    

// IN ALL, UNION HUM TAB USE KARTE HAI JAB humein koi ek hi property of union 
// KI ZAROORAT HO 
// IN CASE WE ARE USING ON PROPERTY AND WE START USING THE OTHER THEN THE FIRST ON E WILL GET OVERWRITTEN AND
// WILL STORE GARBAGE VALUE (99 IN CASE OF AN INTEGER)
///////////////////////////////////////////////////////////////////////////////////////////////////////////


                                //    ENUM OR ENUMERATED TYPE IN C++

#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{                               
                                                //    EXAMPLE 1

    enum Meal{breakfast, lunch, dinner};
    Meal m1 = lunch;
    cout<<(m1 == 2)<<endl;
    Meal m2 = breakfast;
    cout<<m1<<endl;
    cout<<m2<<endl;


    
                                                        //   EXAMPLE 2
	// Defining enum Gender
	enum Gender { Male, Female };

	// Creating Gender type variable
	Gender gender = Male;

	switch (gender)
	{
	case Male:
		cout << "Gender is Male";
		break;
	case Female:
		cout << "Gender is Female";
		break;
	default:
		cout << "Value can be Male or Female";
	}
	return 0;
}


