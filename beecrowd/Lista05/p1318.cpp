// problem: 1318 - Bilhetes Falsos

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;

    while (cin >> n >> m) {
        if (!n && !m) return 0;
        int r = 0;
        vector<int> v(n, 0);
        for (int i = 0; i < m; i++) {
            int x;
            cin >> x;
            v[x - 1]++;
        }
        for (int j : v) {
            if (j > 1) r++;
        }
        cout << r << "\n";
    }

    return 0;
}
