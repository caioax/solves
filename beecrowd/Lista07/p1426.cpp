// problem: 1426 - Coloque Tijolos na Parede

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int m[9][9];

        for (int i = 0; i < 9; i += 2) {
            for (int j = 0; j <= i; j += 2) {
                cin >> m[i][j];
                if (j) {
                    m[i][j - 1] = (m[i - 2][j - 2] - m[i][j - 2] - m[i][j]) / 2;
                }
            }
        }

        for (int i = 1; i < 9; i += 2) {
            for (int j = 0; j <= i; j++) {
                m[i][j] = m[i + 1][j] + m[i + 1][j + 1];
            }
        }

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j <= i; j++) {
                if (j) cout << " ";

                cout << m[i][j];
            }
            cout << "\n";
        }
    }
    return 0;
}
