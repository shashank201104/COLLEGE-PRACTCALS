#include<iostream>
#include<string>
using namespace std;
class myclass{
        public:
        string name;
        int id;
        

        //we can add function in class
        void myfunc(string mname){
            cout<<mname<<endl;
        }


        //we can also declare function inside class and defines it outside the class block.
        void hello();

        //constructor(class method which is called automatically when object is created)
        myclass(){
            cout<<"constructor code executed!\n";
        }
    };

void myclass::hello(){
    cout<<"hello shashank";
    }
int main(){
    myclass emp1;
    myclass emp2;
    emp1.name="shashank";
    emp1.id=4347;
    cout<<"name is "<<emp1.name<<" and id is "<<emp1.id<<endl;
    emp1.myfunc("shashank");
    emp1.hello();

    return 0;
}