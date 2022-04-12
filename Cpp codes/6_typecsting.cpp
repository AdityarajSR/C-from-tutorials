#include<iostream>
using namespace std;
int c = 12;
int main(){                                         
    int a, b, c;
    cout<<"The value of a is "<<endl;
    cin>>a;
    cout<<"The value of b is "<<endl;
    cin>>b;                               
    c = a + b;                             
    cout<<"The value of c is "<<c<<endl;           
    cout<<"The global value of c is "<<::c<<endl;        // how to intentionally call global value of a variable
                                                        //    ::c as shown in the code

    /* YAHA PAR CODE RUN KARNE MEIN DIKKAT AAYI THI 
              SHAYAD,,, MAY BE DUE TO THE PROBLEM OF AN EXTENSION 
                         SO JUST ADD A SPACEBAR TO IT AND SAVE SO THAT IT STARTS WORKING FINE AGAIN */ 
                                           
                        // WORKING WITH FLOAT AND LONG DOUBLE
    float x = 34.4;
    long double y = 34.4;  
    float u = 39.9f;              
    float v = 39.9l;
    // AGAR AISA {x = 34.4f likhta and usko print karta to round off hokar output milta}     
    cout<<"The value of x is "<<x<<endl<<"The value of y is "<<y<<endl        
    <<"The value of u is "<<u<<endl<<"The value of v is "<<v<<endl;            
    
    cout<<endl;                                        
                        // USE OF sizeof FUNCTION/METHOD        
                        // FLOAT, DOUBLE AND LONG DUBLE LITERALS     
    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;                     
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;                           
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;                           
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;                           
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;                           
                                                                                  
                        // REFEreNCE VARIABLES                                      
    // Baburao ---> Babu ---> Kanjar ---> brgra                                   
    // denotes a single person with different names or varaiables                        
    float axe = 455;                                                                              
    float & yes = axe;                // Idhar se yes ki value axe ki value ke barabar ho gayi    
    float & baburao = axe;
    // int & baburao = axe;            ///////////// ye error deta hai //////////////// 
    cout<<axe<<endl;                                                              
    cout<<yes<<endl;                                                              
                                                                                  
    int num1 = 45;                                                                
    float num2 = 54.54;                                                                
    // float num2 = int num2;                                                             
    cout<<"The value of a in float form is "<< float(a)<<endl;                       
                                   // Both give same result                            
    cout<<"The value of a in float form is "<< (float)a<<endl;                       
                                                    //    abcdefghijklmnopqrstuvwxyz   
    cout<<"The value of b in integer form is "<< int(b)<<endl;                          
                                   // Both give same result                       
    cout<<"The value of b in integer form is "<< (int)b<<endl;                   
                                                                                  
    // int(num1) = int(num2);                                                     
    cout<<"The expression is "<<num1 + num2<<endl;                                
    cout<<"The expression is "<<num1 + int(num2)<<endl;                           
    cout<<"The expression is "<<num1 + (int)num2<<endl;                           
                                                                                  
    return 0;                                                                     
}                                                                                 
                                                                    


                                                                        
                                                                        
                                                                        
                                                                        
                                                                        
                                                                        
                                                                           
                                                                            
                                                                                                                                           