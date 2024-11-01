#include <iostream>
#include "postfix_header.h"
using namespace std;
int priority (char alpha){
    if(alpha == '+' || alpha =='-')
        return 1;
 
    if(alpha == '*' || alpha =='/')
        return 2;
 
    if(alpha == '^')
        return 3;

 
    return 0;
}
string convert(string infix)
{
    int i = 0;
    string postfix = "";
    
    Stack<char> opstk;

    while(infix[i]!='\0')
    {
        if(isalnum(infix[i]))          
        {
            postfix += infix[i];
            i++;
        }
        else if(infix[i]=='(')
        {
            opstk.push(infix[i]);
            i++;
        }
        
        else if(infix[i]==')')
        {
            while(opstk.seek()!='('){
                postfix += opstk.pop();
            }
            opstk.pop();
            i++;
        }
        else            
        {
            while (!opstk.isempty() && priority(infix[i]) <= priority(opstk.seek())){
                postfix += opstk.pop();
            }
            opstk.push(infix[i]);
            i++;
        }
    }
    while(!opstk.isempty()){
        postfix += opstk.pop();
    }


    cout << "Postfix is : " << postfix;
    return postfix;
}

int main()
{
    string infix;
    cout<<"enter the expression\n";
    cin>>infix;
    string postfix;
    postfix = convert(infix);
    
    return 0;
}