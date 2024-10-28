#include <iostream>
#include <vector>
using namespace std;

bool turingMachine_anbncn(vector<char>& tape) {
    int head = 0;
    int state = 0;

    while (true) {
        switch (state) {
            case 0:
                if (tape[head] == 'a') {
                    tape[head] = 'X';
                    state = 1;
                    head++;
                } else if (tape[head] == ' ') {
                    state = 4; 
                    head++;
                } else {
                    state = 5;
                    head++;
                }
                break;

            case 1:
                while (tape[head] == 'a' || tape[head] == 'X') {
                    head++;
                }
                if (tape[head] == 'b') {
                    tape[head] = 'Y';
                    state = 2;
                    head++;
                } else {
                    state = 5; 
                }
                break;

            case 2:
                while (tape[head] == 'b' || tape[head] == 'Y') {
                    head++;
                }
                if (tape[head] == 'c') {
                    tape[head] = 'Z';
                    state = 3;
                    head++;
                } else {
                    state = 5;
                }
                break;

            case 3:
                while (tape[head] == 'c' || tape[head] == 'Z') {
                    head++;
                }
                if (tape[head] == 'X') {
                    head--; 
                    state = 0; 
                } else if (tape[head] == ' ') {
                    state = 4;
                } else {
                    state = 5;
                }
                break;

            case 4:
                return true; 

            case 5:
                return false; 
        }
    }
}

int main() {
    string input;
    cout << "Enter the string (of the form a^n b^n c^n): ";
    cin >> input;

    vector<char> tape(input.begin(), input.end());
    tape.push_back(' ');

    if (turingMachine_anbncn(tape)) {
        cout << "The string is accepted by the Turing Machine.\n";
    } else {
        cout << "The string is rejected by the Turing Machine.\n";
    }

    return 0;
}
