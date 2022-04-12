#include <iostream>
using namespace std;

// Here we are inheriting B from A and C from B {{ A --> B --> C}}
// A is the base class for B and B is the base class for C
// { A --> B --> C } is called the inheritance path in the below given example
class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student ::set_roll_number(int r)
{
    roll_number = r;
}
void Student ::get_roll_number()
{
    cout << "The roll number is " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void Exam ::get_marks()
{
    cout << "The marks scored in maths are " << maths << endl;
    cout << "The marks scored in physics are " << physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display_percent()
    {
        get_roll_number();
        get_marks();
        cout << "Your percentage is " << (maths + physics) / 2 << endl;
    }
};

int main()
{
    Result Aditya;
    Aditya.set_roll_number(69);
    Aditya.set_marks(90.0,92.4);
    Aditya.display_percent();
    return 0;
}