#include <iostream>
using namespace std;

// HAMARI BASE CLASS
class Employee{
    public:
    int id;
        float salary;
        Employee(){}              // DEFAULT CONSTRUCTOR FOR CLASS EMPLOYEE
        Employee(int inputId){
            id = inputId;
            salary = 34.0;
        }
};

/* // DERIVED CLASS SYNTAX
Class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc..  
}     
*/

// Creating a Programmer class derived from Employee Base class
// class Programmer : Employee           BY DEFAULT YE CLASS PRIVATE HO JAYEGI 
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData(){
        cout<<id<<endl;
    }
};
/*
THINGS TO NOTE
1) Default visibility mode is private
2)Public visibility mode : Public members of base class become public members of derived class
3)Private visibility mode : Public members of the derived class become private members of the derived class
4)Private members of the base class never get inherited
*/



int main(){
    Employee aditya(1), pranav(2);
    // cout<<aditya.id;  INACCCESSIBLE
    cout<<aditya.salary<<endl;
    cout<<pranav.salary<<endl; 
    Programmer SkillF(101);
    cout<<SkillF.languageCode<<endl;
    SkillF.getData();  
    return 0;
} 