#include <iostream>
#include <string>
using namespace std;
// inheritance:  deriving a class from already existing class
// base class: class from which another class is derived
// derived class : class is which is derived from base class

class emp
{
public: // base class
    emp()
    {
        cout << "class emp construtor is executed!\n";
    }
    int id;
    float salary;
};

// derived class syntax:- class <derived class-name>: <visibility-mode> <base-class name> { class body}

// visibility mode is of 2 type

// public: base class public members will become public member of derived class
// private: base class public member will become private member of derived class

// private member of base class cannot be inherited

// default mode will be private,means if you do not write visibility mode then it will be private by default

// creating derived class
class ceo : private emp
{
public:
    ceo()
    {
        cout << "class ceo contructor is executed!\n";
    }
    void set(int eid, float esalary)
    {
        id = eid;
        salary = esalary;
        cout << "id and salary is set!\n";
    }
    void print()
    {
        cout << "id = " << id << endl
             << "salary = " << salary << endl;
    }
};

class manager : public emp
{
public:
    manager()
    {
        id = 0;
        salary = 0.00;
    }
    void print()
    {
        cout << "id = " << id << endl
             << "salary = " << salary << endl;
    }
};

int main()
{
    ceo saini;
    saini.set(1, 200000.00);
    saini.print();
    // saini.id=20;    this will give error as id is inherited privately.so id is private member of class ceo
    cout<<endl;
    manager x;
    x.print();
    cout<<endl;
    x.id = 3;             // id will set to 3 as id is publicly inherited
    x.salary = 300000.00; // salary will set to 300000.00 as salary is publicly inherited
    cout<<"values of object x after giving the value of id and salary\n";
    x.print();
    return 0;
}