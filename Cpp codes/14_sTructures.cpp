#include<iostream>
using namespace std;
// 1)
struct employee
{
    int eID ;
    char eADDRESS ;
    float eSALARY; 
};

//                            USING TYPEDF IN STRUCTures
// 2)
typedef struct students
{
    int esID ;
    char esADDRESS ;
    float esMARKS ; 
} ep;            // It's kind of thing jaha maine typedf struct ko ep bol diya hai ya define kar diya hai 




int main(){

    struct employee baburao;
    struct employee baburaokabaap;
    struct employee baburaokabeta;

    // cout<<"babuarao ki details kuch iss prakar se hai :"<<endl;
    baburao.eID = 1;
    baburao.eADDRESS = 'a';

    baburao.eADDRESS = 'A';
    baburao.eSALARY = 6969696969696969;

    // cout<<"baburaokabaap ki details kuch iss prakar se hai "<<endl;
    baburaokabaap.eID = 2;
    baburaokabaap.eADDRESS = 'B';
    baburaokabaap.eSALARY = 6968888888888888;

    // cout<<"babuaraokabeta ki details kuch iss prakar se hai :"<<endl;
    baburaokabeta.eID = 3;
    // baburaokabeta.eADDRESS = "NHI BATAAUNGA";   //     YE LINE KO uncomment karne par error aa raha hai 
    // //         a value of type "char *" cannot be assigned to an entity of type "char"C/C++(513)
    // //                        due to use of double inverted commas
    baburaokabeta.eADDRESS = 'C';
    baburaokabeta.eSALARY = 686869696969696969;
    // cout<<'The value of baburao.eID is '<<baburao.eID<<endl;
            //   SIngle inv.comma for chars only and double inverted 
            // comma for long statements to print

    cout<<"The value of baburao.eID is"<<baburao.eID<<endl;
    cout<<"The value of baburaokabaap.eADDRESS is "<<baburaokabaap.eADDRESS<<endl;


    

//        use of         {{{{{{{TYPEDF STrcture}}}}}} in struct 
    ep harry;
    harry.esID = 34;
    cout<<"Harry bhai ki esID "<<harry.esID<<" hai ."<<endl;

    return 0;
}
