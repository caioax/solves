// problem: 1180 - Menor e Posição

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i, x = INT_MAX;
    cin >> n;
    for (int j = 0; j < n; j++) {
        int h;
        cin >> h;
        if (h < x) {
            x = h;
            i = j;
        }
    }
    cout << "Menor valor: " << x << "\n";
    cout << "Posicao: " << i << "\n";

    return 0;
}
