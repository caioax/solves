// problem: 1868 - Espiral Quadrada

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    vector<pair<int, int>> direcoes = {
        {1, 1},   //
        {0, -1},  //
        {1, -1},  //
        {0, 1}    //
    };

    while (cin >> n && n) {
        vector<int> cord(2, n / 2);

        int d = 0, intevalo = 2, contador = 0;
        for (int t = 0; t < n * n; t++) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (i == cord[0] && j == cord[1]) {
                        cout << 'X';
                    } else {
                        cout << 'O';
                    }
                }
                cout << "\n";
            }
            cout << "@\n";

            if (contador == intevalo >> 1) {
                contador = 0;
                intevalo++;

                d = (d + 1) % 4;
            }

            cord[direcoes[d].first] += direcoes[d].second;
            contador++;
        }
    }

    return 0;
}
