#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool pda_anbn(const string& input) {
    stack<char> pdaStack;
    int i = 0;

    
    while (i < input.length() && input[i] == 'a') {
        pdaStack.push('a');
        i++;
    }

    
    while (i < input.length() && input[i] == 'b') {
        if (pdaStack.empty()) {
            return false;
        }
        pdaStack.pop();
        i++;
    }
    return pdaStack.empty() && i == input.length();
}

int main() {
    string input;
    cout << "Enter a string (over {a, b}): ";
    cin >> input;

    if (pda_anbn(input)) {
        cout << "The string is accepted by the PDA.\n";
    } else {
        cout << "The string is rejected by the PDA.\n";
    }

    return 0;
}
