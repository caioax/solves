// problem: 2151 - Soco do Rulk

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int c = 1; c <= t; c++) {
        int m, n, x, y;
        cin >> m >> n >> x >> y;
        x--;
        y--;

        cout << "Parede " << c << ":\n";
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int z;
                cin >> z;

                int d = max(abs(i - x), abs(j - y));
                if (d > 9) d = 9;

                if (j) cout << " ";
                cout << z + (10 - d);
            }
            cout << "\n";
        }
    }

    return 0;
}
