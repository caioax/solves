// problem: 2143 - A Volta do Radar

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;

    while (cin >> t) {
        if (!t) return 0;
        while (t--) {
            int n, p, l;
            cin >> n;
            p = ((n - 1) % 2) + 1;
            l = n - p;

            cout << (2 * l) + p << "\n";
        }
    }

    return 0;
}
