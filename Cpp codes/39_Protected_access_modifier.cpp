#include <iostream>
using namespace std;
/*
                       |   Public Derivation      |	 Private Derivation    | 	 Protected Derivation
Private members        |   	 Not Inherited        |     Not Inherited      |       Not Inherited              
Protected members      |     Protected            |       Private          |        Protected                    
Public members         |  	 Public	              |       Private          |        Protected      
*/       

class Base{
    protected:    // protected vala user dwara access nhi kiya ja sakta hai but inherit kar sakte hai hum isko
    int a;
    private:
    int b;
};

class Derived : Base{
    

};

int main(){
    Base b;
    Derived d;
    // cout<<b.a;     YE ERROR DEGA KYOKI a PROTECTED HAI DONO CLASSES MEIN


    return 0;
}