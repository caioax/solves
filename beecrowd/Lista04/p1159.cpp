// problem: 1159 - Soma de Pares Consecutivos

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;

    while (cin >> x) {
        if (x == 0) return 0;
        int s = 0;

        for (int i = x; i < x + 10; i++) {
            if (i % 2 == 0) s += i;
        }

        cout << s << "\n";
    }

    return 0;
}
