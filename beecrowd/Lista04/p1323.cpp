// problem: 1323 - Feynman

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if (!n) return 0;
        int s = 0;

        for (int i = 1; i <= n; i++) {
            s += i * i;
        }

        cout << s << "\n";
    }

    return 0;
}
