#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "Dispalying Base class variable var_base " << var_base << endl;
    }
};
class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Dispalying Base class variable var_base " << var_base << endl;
        cout << "Dispalying Derived class variable var_derived " << var_derived << endl;
    }
};
int main()
{
    BaseClass obj_base;
    DerivedClass obj_derived;
    BaseClass *base_class_pointer;
    base_class_pointer = &obj_derived; // YAHA PAR MAINE BASE CLASS K POINTER SE DERIVED
                                       // OBJECT KO POINT KAR RAKHA HAI
                                       // YE C++ K ANDAR ALLOWED HAI AND IS THE MAIN THING TO NOTE
                                       // THE 2nd THING TO NOTE IS THAT AGAR HUM IS BASE CLASS K POINTER KO 
                                       //USE KARKE KISI FUNCTION KO BHI CALL KARENGE TO VO 
                                       //BASE CLASS VALA FUNCTION HI RUN KAREGA
    
    base_class_pointer->var_base = 69; 
    base_class_pointer->display();     // YAHA PAR CHAHE OBJECT DERIVED CLASS KA HO LEKIN POINTER DERIVED CLASS 
                                       // KA HAI ISLIYE FUNCTION USI CLASS KA CALL HOGA
                                    //    ISI CHEEZ KO BOLTE HAI LATE BINDING 

    // base_class_pointer->var_derived = 69;  // ye ACCESS HI NHI HOTA JAB TAK FUNCTION BASE CLASS SE DERIVED NA HO 
                                             // YA KHUD USKKA PART NA HO{{GIVES AN ERROR}}
    cout<<endl;
    DerivedClass* derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived = 6969;
    derived_class_pointer->var_base = 696969;
    derived_class_pointer->display();
    
    return 0;
}