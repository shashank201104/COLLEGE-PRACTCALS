#include<iostream>
using namespace std;

// multiple inheritance: derived class with multiple base class 

// syntax to write a multiple inherited class 

// class <derived-class name>:<visibility> <base-class-1 name >,<visibility><base-class-2 name>{ class body};

class base1{
    protected:
    int a;
    public:
    void seta(int x){a=x;}
};
class base2{
    protected:
    int b;
    public:
    void setb(int x){b=x;}
};

class derived:public base1,public base2{
    protected:
    int c;
    public:
    void view(){
        cout<<"value of a is "<<a<<endl;
        cout<<"value of b is "<<b<<endl;
        cout<<"value of c is "<<a+b<<endl;
    }
};

int main(){
    derived saini;
    saini.seta(4);
    saini.setb(125);
    saini.view();
    return 0;
}