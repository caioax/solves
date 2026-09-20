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

        int** matriz;
        matriz = (int**)malloc(m * sizeof(int*));
        for (int i = 0; i < m; i++) {
            matriz[i] = (int*)malloc(n * sizeof(int));
        }

        cout << "Parede " << c << ":\n";
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matriz[i][j];

                int d = max(abs(i - x), abs(j - y));
                if (d > 9) d = 9;

                if (j) cout << " ";
                cout << matriz[i][j] + (10 - d);
            }
            cout << "\n";
        }

        for (int i = 0; i < m; i++) {
            free(matriz[i]);
        }
        free(matriz);
    }

    return 0;
}
