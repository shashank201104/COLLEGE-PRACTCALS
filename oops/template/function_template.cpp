#include <iostream>
using namespace std;

// Like class templates, we can also define function templates that could be used to create a family of functions with different argument types.

// syntax:-
/*template <class t>
 returntype function name(parameter of tye t){
    body using type t
 }*/

template <class t>
void swap(t x, t y)
{
    t z = x;
    x = y;
    y = z;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
}

//we could also use multiple custom data types

template <class t, class h>
void print(t x, h y){
    cout<<"the value of x is "<<x<<endl;
    cout<<"the value of y is "<<y<<endl;
}

int main()
{
    swap(2, 4);
    swap(2.4,5.6);
    print(3,4.564);
    print(3,'x');
    return 0;
}