// problem: 1393 - Lajotas Hexagonais

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v(42);
    v[0] = 0;
    v[1] = 1;
    for (int i = 2; i < 42; i++) {
        v[i] = v[i - 2] + v[i - 1];
    }

    int x;
    while (cin >> x && x) {
        cout << v[x + 1] << "\n";
    }

    return 0;
}
