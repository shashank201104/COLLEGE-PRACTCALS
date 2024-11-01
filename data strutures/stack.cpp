#include <iostream>
using namespace std;

class Stack
{
    int stk[5];
    int counter = 0;

public:
    bool isfull()
    {
        if (counter > 4)
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
    void push()
    {
        if (!isfull())
        {
            int a;
            cout << "enter the element: \n";
            cin >> a;
            stk[counter] = a;
            cout << "element pushed!\n";
            counter++;
        }
        else
        {
            cout << "overflow condition occured!\n";
            cout << "stack is full!\n";
        }
    }
    void pop()
    {
        if (!isempty())
        {
            counter--;
            stk[counter] = 0;
            cout << "element poped!\n";
        }
        else
        {
            cout << "underflow condition occured!\n";
            cout << "stack is empty!\n";
        }
    }
    void seek()
    {
        cout << "the value of counter is " << counter << endl;
    }
    void display()
    {
        for (int i = 0; i < counter; i++)
        {
            cout << stk[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    Stack stk;
    bool check = true;
    while (check)
    {
    char x;
    cout << "choose the stack operation:-\n";
    cout << " a - add an element in stack\n";
    cout << " b - remove top element from stack\n";
    cout << " c - check if stack is full\n";
    cout << " d - check if stack is empty\n";
    cout << " e - get the poistion of stack counter\n";
    cout << " f - display the whole stack\n";
    cout << " g - exit\n";
    cin >> x;

        switch (x)
        {
        case 'a':
            stk.push();
            break;
        case 'b':
            stk.pop();
            break;
        case 'c':
            if (stk.isfull())
            {
                cout << "stack is full!\n";
            }
            else
            {
                cout << "stack is not full!\n";
            }
            break;
        case 'd':
            if (stk.isempty())
            {
                cout << "stack is empty!\n";
            }
            else
            {
                cout << "stack is not empty!\n";
            }
            break;
        case 'e':
            stk.seek();
            break;
        case 'f':
            stk.display();
            break;
        case 'g':
            check = false;
        default:
            cout << "invalid !!!!\n";
        }
        
    }
    return 0;
}