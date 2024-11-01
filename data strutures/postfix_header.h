#include <iostream>
using namespace std;
template <class t>
class Stack
{
public:
    t stk[20];
    int counter = 0;
    bool isfull()
    {
        if (counter > 19)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isempty()
    {
        if (counter <= 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void push(t x)
    {
        if (!isfull())
        {
            stk[counter] = x;
            counter++;
        }
        else
        {
            cout << "overflow condition occured!\n";
        }
    }
    t pop()
    {
        if (!isempty())
        {
            counter--;
            return stk[counter];
            stk[counter] =0;
        }
        else
        {
            cout << "underflow condition occured!\n";
        }
    }
    t seek()
    {
        return stk[counter-1];
    }
};