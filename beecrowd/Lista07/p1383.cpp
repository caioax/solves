// problem: 1383 - Sudoku

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int c = 1; c <= n; c++) {
        vector<set<int>> v(27);

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                int x, qi, qj;
                cin >> x;

                if (i < 3) {
                    qi = 0;
                } else if (i < 6) {
                    qi = 3;
                } else {
                    qi = 6;
                }

                if (j < 3) {
                    qj = 0;
                } else if (j < 6) {
                    qj = 1;
                } else {
                    qj = 2;
                }

                v[i].insert(x);
                v[9 + j].insert(x);
                v[18 + qi + qj].insert(x);
            }
        }

        bool erro = false;

        cout << "Instancia " << c << "\n";
        for (set<int> x : v) {
            if ((int)x.size() != 9) {
                cout << "NAO\n";
                erro = true;
                break;
            }
        }
        if (!erro) cout << "SIM\n";
        cout << "\n";
    }

    return 0;
}
