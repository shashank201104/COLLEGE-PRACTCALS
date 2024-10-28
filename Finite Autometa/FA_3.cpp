#include <iostream>
#include <string>
using namespace std;
void checkstring(string w){
    if(w.length()<4){
        cout<<"string rejected\n";
        return;
    }
    if((w[0]==w[w.length()-1]) && (w[1]==w[w.length()-2])){
        cout<<"string accepted\n";
    }
    else{
        cout<<"string rejected\n";
    }
}
int main() {
    string w;
    cout << "Enter the string :\n";
    cin >> w;

    checkstring(w);

    return 0;
}