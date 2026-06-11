// problem: 2176 - Paridade

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int n = 0;
    cin >> s;

    for (char c : s) {
        n += c - '0';
    }

    if (n % 2 == 0) {
        cout << s << "0\n";
    } else {
        cout << s << "1\n";
    }

    return 0;
}
