#include <iostream>
#include <string>
using namespace std;

class binary{
// private:        
    string s;                     // by default private hai ye //
public:
    void chk_bin(void);
public:
    void read(void);
    void ones_compliment(void);
    void display(void);

};
///////////////////////////////////////////////////////////////////////////////////////////////////////////
void binary :: read (void){
    cout<<"Enter a binary number "<<endl;
    cin>>s;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////

void binary :: chk_bin (void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1'){   // ACCESSING STRING WITHOUT USING ARRAYS     
            cout<<"Incorrect binary format "<<endl;
            exit(0);
        }
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////

void binary :: ones_compliment(void)
{ 
    chk_bin();        // is function k andar fn use hua {that is why it is be called nesting of function
                            //  chahe vo public ho yaa private ho}
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
       else
        {
            s.at(i) = '0';
        }
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////

void binary::display(void)
{
    cout<<"Displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(){

    binary b;
    b.read();
//  b.chk_bin();      // ye user ko dikhega hi nhi and andar hi andar implement 
                        //  ho jayega         
    b.display();
    b.ones_compliment();
    cout<<endl;
    b.display();
    
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
