#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool pda_wXwr(const string& input) {
    stack<char> pdaStack;
    int i = 0;
    int n = input.length();

    while (i < n && input[i] != 'X') {
        pdaStack.push(input[i]);
        i++;
    }

    if (i == n || input[i] != 'X') {
        return false; // No 'X' symbol 
    }
    i++; 

    while (i < n) {
        if (pdaStack.empty() || pdaStack.top() != input[i]) {
            return false;
        }
        pdaStack.pop();
        i++;
    }

    return pdaStack.empty();
}

int main() {
    string input;
    cout << "Enter a string (of the form wXwr with w over {a, b}): ";
    cin >> input;

    if (pda_wXwr(input)) {
        cout << "The string is accepted by the PDA.\n";
    } else {
        cout << "The string is rejected by the PDA.\n";
    }

    return 0;
}
