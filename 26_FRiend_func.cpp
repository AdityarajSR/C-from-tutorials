#include <iostream>
using namespace std;

class complex{
    int a, b;
    public:


// NEEChe vali line se ye specify kara ja raha hai ki nonmember -- sumcomplex class complex ka private 
// data access kar sakta hai ab
        friend complex sumcomplex(complex o1, complex o2);
        
        void setnumber (int n1, int n2){
            a = n1;
            b = n2;
        }

        void printnumber(){
            cout <<"Your number is "<< a << "+" << b << "i"<<endl; 
             

        //      yaha par as a friend specify karunga to niche vala error aa raha hai 
        //                      WHY?
        // friend complex sumcomplex(complex o1, complex o2);
        }

};

complex sumcomplex(complex o1, complex o2){
    complex o3;
    o3.setnumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}


int main(){

    complex c1, c2, sum;
    c1.setnumber(1, 4);
    c1.printnumber();

    c2.setnumber(5, 8);
    c2.printnumber();

    sum = sumcomplex(c1, c2);
    sum.printnumber();
    
    return 0;
}

// PROPERTIES OF FRIEND FUNCTIONS
/*
1) nOT in the scope of class
2) since it is not in  the scope of the class it cannot be called from object of the class
3)c1.sumcoplex INVALID HOTA HAI IDHAR
4)Can be invoked without the help of any object 
5)Usually contais the objects as arguments
6)Can be declared inside the public or private of the class
7)It can't access the member direclyy by their names and need object_name.member_name to access any member..
*/