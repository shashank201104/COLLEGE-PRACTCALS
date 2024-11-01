#include<iostream>
using namespace std;

//virtual class:let A be a class with two derived class B and C. D is a class which inherites from both B and C . let x be variable in class A .this x will be pass down to class B and C.as B and C are parent class of D , D will inherit the variable x from each parent so two times. this will creat ambiguity.hence we use virtual base class for declaring class B and C to solve this problem and to ensure that the class D will have single copy of variable x.

//example of virtual base class
// student-->test,sport-->result 

// syntax for making a derived class virtual
//class<class name>:virtual <visibility><base class> {class body}

class student{
    protected:
    int roll;
    public:
    void setroll(int i){roll=i;}
    void showroll(){cout<<"roll no : "<<roll<<endl;}

};

class test:virtual public student{
    protected:
    int math,english;
    public:
    void setmarks(int i,int j){
        math=i;
        english =j;
    }
    void showmarks(){
        cout<<"marks in maths : "<<math<<endl;
        cout<<"marks in english : "<<english<<endl;
    }
};

class sport:virtual public student{
    protected:
    int score;
    public:
    void setscore(int i){score=i;}
    void showscore(){cout<<"marks in sports is : "<<score<<endl;}
};

class result:public test,public sport{
    protected:
    int total;
    public:
    void view(){
        total=math+english+score;
        showroll();
        showmarks();
        showscore();
        cout<<"your total marks are : "<<total<<endl;
    }
};
int main(){
    result saini;
    saini.setroll(18);
    saini.setmarks(96,97);
    saini.setscore(95);
    saini.view();
    return 0;
}