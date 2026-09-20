#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int** m;
    m = (int**)malloc(27 * sizeof(int*));
    for (int i = 0; i < 27; i++) {
        m[i] = (int*)malloc(9 * sizeof(int));
    }

    for (int c = 1; c <= n; c++) {
        for (int i = 0; i < 27; i++) {
            for (int j = 0; j < 9; j++) {
                m[i][j] = 0;
            }
        }

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                int x, qi, qj;
                cin >> x;

                qi = (i / 3) * 3;
                qj = j / 3;

                m[i][x - 1] = 1;
                m[9 + j][x - 1] = 1;
                m[18 + qi + qj][x - 1] = 1;
            }
        }

        bool erro = false;

        cout << "Instancia " << c << "\n";
        for (int i = 0; i < 27; i++) {
            for (int j = 0; j < 9; j++) {
                if (!m[i][j]) {
                    cout << "NAO\n";
                    erro = true;
                    break;
                }
            }
            if (erro) break;
        }
        if (!erro) cout << "SIM\n";
        cout << "\n";
    }

    for (int i = 0; i < 27; i++) {
        free(m[i]);
    }
    free(m);

    return 0;
}
