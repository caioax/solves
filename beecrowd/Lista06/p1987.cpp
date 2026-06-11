// problem: 1987 - Divisibilidade Por 3

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;

    while (cin >> n >> s) {
        int r = 0;
        for (char c : s) {
            r += c - '0';
        }
        if (r % 3 == 0) {
            cout << r << " sim\n";
        } else {
            cout << r << " nao\n";
        }
    }
}
