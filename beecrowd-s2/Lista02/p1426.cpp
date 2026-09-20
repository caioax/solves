#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int** m;
    m = (int**)malloc(9 * sizeof(int*));
    for (int i = 0; i < 9; i++) {
        m[i] = (int*)malloc(9 * sizeof(int));
    }

    while (n--) {
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

    for (int i = 0; i < 9; i++) {
        free(m[i]);
    }
    free(m);
    return 0;
}
