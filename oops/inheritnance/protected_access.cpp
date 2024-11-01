#include <iostream>
#include <string>
using namespace std;
//protected access: it is used to make a variable accessable to derived class but inaccesable to outside world.(similar to private)

/*
class derived as            publicly             privatly             protectedly
        public members        public             private              protected
        private members     not inherited     not inherited       not inherited
        protected members      protected         private               protected
        */
class base{
    protected:
    int a;
    int b;

};
class derive:public base{
    public:
    void setdata(int x,int y);
    void printdata();
};
void derive::setdata(int x, int y){
    a=x;
    b=y;
}
void derive::printdata(){
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
}

int main()
{
    derive xyz;
    xyz.setdata(4,5);
    xyz.printdata();
    return 0;
}