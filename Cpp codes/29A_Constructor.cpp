// INSTANCE OF A CLASS ARTICLE TO READ --> https://stackoverflow.com/questions/1215881/the-difference-between-classes-objects-and-instances

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
    Cars Car1;
    Car1.setdata("hyundai", "eon" , "petrol" , 21.2 , 350000);
    Car1.displaydata();

    
    return 0;
}