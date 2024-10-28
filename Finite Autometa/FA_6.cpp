#include <iostream>
#include <string>
using namespace std;

bool FA_L1(string w, int i);//fa of language with even no of a's
bool FA_L2(string w, int i);//fa of language with ending with b

bool FA_Union(string w, int i);
bool FA_Intersection(string w, int i);
bool FA_Concatenation(string w);

bool FA_L1(string w, int i) {
    int count_a = 0;
    for (char c : w) {
        if (c == 'a') count_a++;
    }
    return count_a % 2 == 0;
}

bool FA_L2(string w, int i) {
    return !w.empty() && w.back() == 'b';
}

bool FA_Union(string w, int i) {
    return FA_L1(w, i) || FA_L2(w, i);
}

bool FA_Intersection(string w, int i) {
    return FA_L1(w, i) && FA_L2(w, i);
}

bool FA_Concatenation(string w) {
    for (int split = 0; split <= w.length(); ++split) {
        string part1 = w.substr(0, split);
        string part2 = w.substr(split);
        if (FA_L1(part1, 0) && FA_L2(part2, 0)) {
            return true;
        }
    }
    return false;
}

int main() {
    string w;
    cout << "Enter the string (over {a, b}):\n";
    cin >> w;

    if (FA_Union(w, 0)) {
        cout << "String is accepted by the Union of L1 and L2\n";
    } else {
        cout << "String is rejected by the Union of L1 and L2\n";
    }

    if (FA_Intersection(w, 0)) {
        cout << "String is accepted by the Intersection of L1 and L2\n";
    } else {
        cout << "String is rejected by the Intersection of L1 and L2\n";
    }

    if (FA_Concatenation(w)) {
        cout << "String is accepted by the Concatenation of L1 and L2\n";
    } else {
        cout << "String is rejected by the Concatenation of L1 and L2\n";
    }

    return 0;
}
