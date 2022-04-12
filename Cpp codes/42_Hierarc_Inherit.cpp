#include <iostream>
using namespace std;
class Univ_Students
{
private:
    int identity;

public:
    int roll_num;
    string name;
    void DETAILS(int r, string n)
    {
        roll_num = r;
        name = n;
    }
};

class HUmanities : public Univ_Students
{
public:
    int classId_H;
    void DETAILS_H(int h)
    {
        classId_H = h;
        cout << "The details of the University students are " << endl;
        cout << "Roll number = " << roll_num << endl;
        cout << "Name of student = " << name << endl;
        cout << "Humanity Student classId is " << classId_H << endl;
    }
};
class Science : public Univ_Students
{
public:
    int classId_S;
    void DETAILS_H(int s)
    {
        classId_S = s;
        cout << "The details of the University students are " << endl;
        cout << "Roll number = " << roll_num << endl;
        cout << "Name of student = " << name << endl;
        cout << "Humanity Student classId is " << classId_S << endl;
    }
};
class MEdical : public Univ_Students
{
public:
    int classId_M;
    void DETAILS_H(int s)
    {
        classId_M = s;
        cout << "The details of the University students are " << endl;
        cout << "Roll number = " << roll_num << endl;
        cout << "Name of student = " << name << endl;
        cout << "Humanity Student classId is " << classId_M << endl;
    }
};
class literature : public HUmanities
{
public:
    void out1()
    {
        cout << "THIS IS HUMNAITIES CLASS AND YOU WILL HAVE TO STUDY LITERATURE now " << endl;
    }
};
class Philosophy : public HUmanities
{
public:
    void out2()
    {
        cout << "THIS IS HUMNAITIES CLASS AND YOU WILL HAVE TO STUDY PHILOSOPY now " << endl;
    }
};
class History : public HUmanities
{
public:
    void out3()
    {
        cout << "THIS IS HUMNAITIES CLASS AND YOU WILL HAVE TO STUDY ITIHAAS now " << endl;
    }
};

class CSE : public Science
{
public:
    void Allout1()
    {
        cout << "THIS IS SCIENCE CLASS AND YOU WILL HAVE TO STUDY CSE now " << endl;
    }
};
class ECE : public Science
{
public:
    void Allout2()
    {
        cout << "THIS IS SCIENCE CLASS AND YOU WILL HAVE TO STUDY ECE now " << endl;
    }
};
class MECHANICAL : public Science
{
public:
    void Allout3()
    {
        cout << "THIS IS SCIENCE CLASS AND YOU WILL HAVE TO STUDY MECHANICS SUBJECT now " << endl;
    }
};

int main()
{
    // cse vala baccha
    CSE Baburao;
    Baburao.DETAILS(1001, "Baburao");
    Baburao.DETAILS_H(200221001);
    Baburao.Allout1();

    cout<<endl;
    //  philosophy vala baccha
    Philosophy Baburao_ka_mitra;
    Baburao_ka_mitra.DETAILS(2001,"Baburao_ka_mitra");
    Baburao_ka_mitra.DETAILS_H(200222001);
    Baburao_ka_mitra.out2();

    return 0;
}