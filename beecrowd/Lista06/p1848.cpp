// problem: 1848 - Corvo Contador

#include <bits/stdc++.h>
using namespace std;

int main() {
    int grito = 0, r = 0;

    while (grito < 3) {
        string s;
        cin >> s;
        if (s == "caw") {
            cin >> s;
            cout << r << "\n";
            r = 0;
            grito++;
            continue;
        }

        for (int i = 0; i < 3; i++) {
            if (s[i] == '*') r += pow(2, 2 - i);
        }
    }

    return 0;
}
