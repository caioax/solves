// problem: 1865 - Mjölnir

#include <bits/stdc++.h>
using namespace std;

int main() {
    int c, l;
    cin >> c;

    while (c--) {
        string s;
        cin >> s >> l;
        if (s == "Thor") {
            cout << "Y\n";
        } else {
            cout << "N\n";
        }
    }

    return 0;
}
