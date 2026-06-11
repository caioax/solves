// problem: 2327 - Quadrados

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(2 * n + 2, 0);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;

            v[i] += x;
            v[n + j] += x;
            if (i == j) v[2 * n] += x;
            if (i + j == n - 1) v[2 * n + 1] += x;
        }
    }

    int r = v[0];
    bool erro = false;
    for (int x : v) {
        if (x == r) continue;

        cout << "-1\n";
        erro = true;
        break;
    }
    if (!erro) cout << r << "\n";

    return 0;
}
