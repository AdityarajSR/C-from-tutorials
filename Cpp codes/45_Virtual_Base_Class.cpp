#include <iostream>
using namespace std;
/*
student --> Test
student --> sport
____________________________
student --> roll_number
         YE UPAR VALI AUR NEECHE VALI LINE K KARNA DO DO ROLL NUMBR AAYENGE RESULT CLASS
         MEIN AUR YE EK TYPE KA CONFLICT SA BAN JAYEGA KI EK HI CLASS MEIN 2-2 ROLL NUMBER
         LEKIN HUM VIRTUAL BASE CLASS DECLARE KARKE ISS AMBIGUITY KO HATA SAKTE HAI
sport --> roll_number
____________________________
*/
class student
{
protected:
    int roll_num;

public:
    void set_roll_num(int a)
    {
        roll_num = a;
    }
    void print_roll_num()
    {
        cout << "Your roll number is " << roll_num << endl;
    }
};

class Test : virtual public student
{
protected:
    float maths, physics;

public:
    void setmarks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "You result is here: " << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};

class sport : virtual public student
{
protected:
    float score;

public:
    void set_score(float scr)
    {
        score = scr;
    }
    void print_score(void)
    {
        cout << "Your sports performance score is " << score << endl;
    }
};

class Result : public Test, public sport{
    private:
        float total;
    public:
        void display(void){
            total = maths + physics + score;
            print_roll_num();
            print_marks();
            print_score();
            cout<< "Your total score is: "<<total<<endl;
        }
};
int main(){
    Result harry;
    harry.set_roll_num(420);
    harry.setmarks(78.5, 93.0);
    harry.set_score(9);
    harry.display();
    return 0;
}
