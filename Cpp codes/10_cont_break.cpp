                            //    STATEMENT BREAK

# include <iostream>
using namespace std;

int main(){
    for (int  i = 0; i < 10; i++)
    {
        if (i == 5){
            break;
        }
        cout<<i<<endl;
        
    }
    
///////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout <<"Now see the continue statement use"<<endl;
                            // STATEMENT CONTINUE

    for (int i = 0; i < 11; i++)

    {
        if (i == 5){
            continue;
        }
        cout<<i<<endl;   
    }

    return 0;
}