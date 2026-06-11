// problem: 1997 - Branco e Preto

#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;

    while (cin >> a >> b && a != "*" && b != "*") {
        int r = 0;
        bool streak = false;
        for (int i = 0; i < (int)a.size(); i++) {
            if (a[i] != b[i]) {
                streak = true;
                continue;
            }
            if (streak) {
                r++;
                streak = false;
            }
        }
        if (streak) r++;
        cout << r << "\n";
    }

    return 0;
}
