#include <iostream>
using namespace std;

class student
{
protected:
    int roll;

public:
    void setroll(int a) { roll = a; }
    void getroll() { cout << "roll no is : " << roll << endl; }
};

class exam : public student
{
protected:
    int maths;
    int science;

public:
    void setmarks(int x, int y)
    {
        maths = x;
        science = y;
    }
    void getmarks()
    {
        cout << "marks in maths : " << maths << endl;
        cout << "marks in science : " << science << endl;
    }
};

class result : public exam
{
private:
    int percentage;

public:
    void viewresult()
    {
        getroll();
        getmarks();
        cout << "student percentage is : " << (maths + science) / 2 << "%" << endl;
    }
};
int main()
{
    result saini;
    saini.setroll(18);
    saini.setmarks(96, 90);
    saini.viewresult();
    return 0;
}