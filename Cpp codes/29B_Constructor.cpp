#include <iostream>
using namespace std;

// Class declaration and definition
class Cars
{
    private:
        // data members
        string company_name;
        string model_name;
        string fuel_type;
        float mileage;
        double price;
    public:

    // CONSTRUCTOR NEEDS TO BE CALLED INSIDE THE PUBLIC PART ONLY
    // ALSO IT DOES NOT HAVE ANY RETURN TYPE, also we will write 
    //  THERE IS EVEN NO NEED TO CALL IT, YAHA PAR AISA HAI KI WE CALLED IT EXPLICITLY AND 
    // IT IS KNOWN AS A DEFAULT CONSTRUCTOR 

    Cars(){
        cout<<" Default constructor created "<<endl;
    }

    //   member functions
    void setdata(string cname, string mname, string ftype, float m, double p){
        company_name = cname;
        model_name = mname;
        fuel_type = ftype;
        mileage = m;
        price = p;
    }

    void displaydata(){
        cout<<"Car properties are as following --> "<<endl;
        cout<< "The name of the company is --> "<<company_name<<endl;
        cout<< "The name of the model is --> "<<model_name<<endl;
        cout<< "The name of fuel is --> "<<fuel_type<<endl;
        cout<< "The mileage is --> "<<mileage<<endl;
        cout<< "The price is --> "<<price<<endl;

    }

};


int main(){
    Cars Car1, Car2, Car3;          // jitne objects banaye hai utni baar default constructor banta hai 
                            // ye jo constructor hota hai, ye sabhi objects ke atributes ko value
                            //  deta hai as a default on its own
    cout<<endl;
    Car1.setdata("hyundai", "eon" , "petrol" , 21.2 , 350000);
    Car1.displaydata();

    
    return 0;
}