// problem: 2168 - Crepúsculo em Portland

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m[n + 1][n + 1];

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            cin >> m[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x = m[i][j] + m[i][j + 1] + m[i + 1][j] + m[i + 1][j + 1];

            if (x >= 2)
                cout << 'S';
            else
                cout << 'U';
        }
        cout << "\n";
    }

    return 0;
}
