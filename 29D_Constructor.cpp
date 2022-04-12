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
// DEFAULT CONSTRUCTOR
    Cars()
    {
        cout << " Default constructor created " << endl;
        // Now the thing is that we can also change the values inside the constructor 
        // on our own if we want that to happen SO NOW I MYSELF CHANGE THE VALUES OF THE 
        // PROPERTIES OF THE OBJECT INSIDE CONSTRUCTOR BY FILLING THE VALUES MANUALLY 
        company_name = "Hyndai";
        model_name = "EON";
        fuel_type = "Petrol";
        mileage = 21.2;
        price = 1500000;

        
    }

    //   member functions
    void setdata(string cname, string mname, string ftype, float m, double p)
    {
        company_name = cname;
        model_name = mname;
        fuel_type = ftype;
        mileage = m;
        price = p;
    }

    void displaydata()
    {
        cout << "Car properties are as following --> " << endl;
        cout << "The name of the company is --> " << company_name << endl;
        cout << "The name of the model is --> " << model_name << endl;
        cout << "The name of fuel is --> " << fuel_type << endl;
        cout << "The mileage is --> " << mileage << endl;
        cout << "The price is --> " << price << endl;
    }
};

int main()
{
    Cars Car1;
    Car1.displaydata();
// ONLY DEFAULT CONSTRUCTOR IS CREATED WHICH CALLS A FUNCTION WITHOUT CALLING IT

    return 0;
}