#include <iostream>
#include <cmath>
#include "postfix_header.h"
using namespace std;

int eval(string inp){
    Stack<int> opd;
    for(int i = 0 ;i<inp.length();i++){
        if(isdigit(inp[i])){
            opd.push(inp[i]-'0'); 
        }
        else{
            int a,b;
            b=opd.seek();
            opd.pop();
            a=opd.seek();
            opd.pop();
            switch (inp[i])
            {
            case '+':
                opd.push(a+b);
                break;
            case '-':
                opd.push(a-b);
                break;
            case '/':
                opd.push(a/b);
                break;
            case '*':
                opd.push(a*b);
                break;
            case '^':
                opd.push(pow(a,b));
                break;
            case '&':
                opd.push(pow(a,b));
                break;
            
            default:
                break;
            }
        }
    }
    return opd.seek();
}
int main()
{
    string x;
    cout<<"enter the expression\n";
    cin>>x;
    cout<<eval(x);

    return 0;
}