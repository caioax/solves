// problem: 1541 - Construindo Casas

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;

    while (cin >> a) {
        if (!a) return 0;
        cin >> b >> c;
        int t = a * b * 100 / c;

        cout << (int)sqrt(t) << "\n";
    }

    return 0;
}
