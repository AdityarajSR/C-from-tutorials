/*  "this" KEYWORD IN C++
1) "this" IS A KEYWORD USED IN C++
2) this IS A LOCAL OBJECT POINTER IN EVERY INSTACE MEMBER FUNCTION CONTAINING
ADDRESSES OF THE CALLER OBJECT
3) this POINTER CANNOT BE MODIFIED
4) BASICALLY IT IS USED TO REFER THE CALLER OBJECT IN THE MEMBER FUNCTION 
5) this pointer is created automatically when the instance member function is created  */

#include <iostream>
using namespace std;

class Box
{
private:
    int l, b, h;

public:

    // void setDimension(int l, int b, int h)
    // {// ye RUN TO KAR JAYEGA BUT GARBAGE VALUE PRINT HOGI AT THE END
    // // DUE TO CONFUSION 
    //     l = l;
    //     b = b;
    //     h = h;
    // }
                            //    ALTERNATIVE

     void setDimension(int l, int b, int h)
    {
        this->l = l;
        // this POINTER POINT KAR RAHA HAI CALL KARE VALE 
        // OBJECT SMALLBOX k member vale l ko 
        // na ki setDimension FUNCTION K LOCAL VARIABLE KO
        this->b = b;
        this->h = h;
    }
    // Box& setDimension(int l, int b, int h)
    // {
    //     this->l = l;
    //     this->b = b;
    //     this->h = h;
    //     return *this;
    // }
    void showDimensions(){
        cout<<"Length "<<l<<endl;
        cout<<"Breadth "<<l<<endl;
        cout<<"Height "<<l<<endl;
    }
};
// ___________________________________________________________________________________________________________
// class Box
// {
// private:
//     int l, b, h;

// public:
// // CLASS KA ANDAR BANE HUYE FUNCTION INSTANCE MEMBER FUNCTION HOTE HAI

//     // static void setDimension(int x, int y, int z)    ye INSTANCE MEMBER FUNCTION NHI BOLENGEAS USED static keyword
//     void setDimension(int x, int y, int z)
//     {
//         // is function k andar this naam ka pointer already present rehta hai 
//         l = x;
//         b = y;
//         h = z;
//     }
//     void showDimensions(){
//         cout<<"Length "<<l<<endl;
//         cout<<"Breadth "<<l<<endl;
//         cout<<"Height "<<l<<endl;
//     }
// };
int main()
{
    Box SmallBox, *p;
    p = &SmallBox;    // p k andar SmallBox ka address store kar rakha hai 
    // SmallBox caller object hai yaha par 
    // this POINTER contains the address of the object we created
    SmallBox.setDimension(12,13,15);
    // p->setDimension(12,13,15);
    SmallBox.showDimensions();
    // p->showDimensions();
    return 0;
}