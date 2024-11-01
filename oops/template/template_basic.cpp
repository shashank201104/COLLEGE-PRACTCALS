#include <iostream>
using namespace std;

// obeject created in oops use its class as a template,means it use class to define its properties.similarly class uses template as to define itself for multiple data types.

/*syntax for creating template for class

template <class [genral data type]
class [class name]{
 class body using anonymous type defined in template defination
}

*/

// here template for class add is created for custom data type T
template <class T>
class add
{
public:
    T a, b; // we use T to intialize the type of variable
    add(T i, T j)
    {
        a = i;
        b = j;
    }
    void sum()
    {
        T c = a + b;
        cout << c << endl;
    }
};

//creating a template with multiple anonymous data type

template <class t, class h>     //t and h are derined as custom data type 
class num{
    public:
    t a;
    h b;
    num(t x, h y){
        a=x;
        b=y;
    }
    void show(){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
    }
};
int main()
{
    add<float> a(4.45, 5.11); // when creating object, we have to mention the data type of T as written in code of this line.
    a.sum();

    num<int,float> h(3,4.56);
    h.show();

    return 0;
}

// we can also give default value for custom variable
// example
// template<class t=int,class h=float>
//here default value of t is int and h is float