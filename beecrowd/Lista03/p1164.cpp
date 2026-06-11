// problem: 1164 - Número Perfeito

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x, r = 0;
        cin >> x;

        for (int j = 1; j <= (x / 2); j++) {
            if (x % j == 0) {
                r += j;
            }
        }
        if (x == r) {
            cout << x << " eh perfeito" << endl;
        } else {
            cout << x << " nao eh perfeito" << endl;
        }
    }

    return 0;
}
