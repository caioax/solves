// problem: 1329 - Cara ou Coroa

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if (!n) return 0;
        int m = 0, j = 0;

        while (n--) {
            int x;
            cin >> x;
            j += x;
            m += !x;
        }

        cout << "Mary won " << m << " times and John won " << j << " times"
             << "\n";
    }

    return 0;
}
