// HERE WE WILL LEARN ABOUT METHOD(new) to create a new object
// and also ARROW OPERATOR TO DEREFERENCE A POINTER AND RUN ITS SOME FUNCTION

#include <iostream>
using namespace std;
class Complex{
    int real, imaginary;
    public:
    void getdata(){
        cout<<"The real part is "<<real<<endl;
    }
    void setdata(int a, int b){
        real = a;
        imaginary = b;
    }

};
int main(){
    // Complex C1;
    // Complex *pointerr = &C1;    
             //  ONE AND THE SAME THING
    Complex *pointerr = new Complex;     //{{THIS IS AN ALTERNATIVE SYNTAX TO CREATE A NEW OBJECT OF 
                                        // THE COMPLEX CLASS AND STROTING IT INTO A POINTER NAMED pointerr}}

    // C1.setdata(4,6);
    // C1.getdata();
                                  //  ONE AND THE SAME THING
    // (*pointerr).setdata(4,6);
    // (*pointerr).getdata();
                                  //  ONE AND THE SAME THING
    pointerr->setdata(4,6);   
    // YE SYNTAX KA MATLAB HOTA HAI 
    // pointerr NAAMAK POINTER ko dereference karo aur uska setdata function run karo
    pointerr->getdata();
    // pointerr NAAMAK POINTER ko dereference karo aur uska Getdata function run karo
//__________________________________________________________________________________

// CREATING AN ARRAY OF OBJECTS
    Complex *pointerr1 = new Complex;   // AN ARRAY OF 4 NEW OBJECTS IS CREATED  
    pointerr1->setdata(14,16);   
    // (pointerr1 + 1)->setdata(142,162);   
    // (pointerr1 + 2)->setdata(132,162);   
    // (pointerr1 + 3)->setdata(1642,162);   
    // (pointerr1 + 4)->setdata(16342,162);   
    pointerr1->getdata();
    // (pointerr1 + 1)->getdata();
    // (pointerr1 + 2)->getdata();
    // (pointerr1 + 3)->getdata();
    // (pointerr1 + 4)->getdata();

    return 0;
}