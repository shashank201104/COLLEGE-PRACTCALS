#include <iostream>
#include <vector>
using namespace std;

bool turingMachine_incrementBinary(vector<char>& tape) {
    int head = 0;
    
    while (tape[head] != ' ') {
        head++; 
    }
    head--; 
    bool carry = true;

  
    while (head >= 0 && carry) {
        if (tape[head] == '0') {
            tape[head] = '1';
            carry = false; 
        } else if (tape[head] == '1') {
            tape[head] = '0'; 
        }
        head--; 
    }

    if (carry) {
        tape.insert(tape.begin(), '1');
    }

    return true;
}

void printTape(const vector<char>& tape) {
    for (char c : tape) {
        cout << c;
    }
    cout << endl;
}

int main() {
    string input;
    cout << "Enter the binary number (do not include any spaces): ";
    cin >> input;

    vector<char> tape(input.begin(), input.end());
    tape.push_back(' ');

    turingMachine_incrementBinary(tape);

    cout << "Incremented binary number: ";
    printTape(tape);

    return 0;
}
