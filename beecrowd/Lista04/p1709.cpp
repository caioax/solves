// problem: 1709 - Baralho Embaralhado

#include <bits/stdc++.h>
using namespace std;

int main() {
    int p, mmc = 1;
    cin >> p;
    int n = p / 2;
    vector<bool> visitados(p + 1, false);

    for (int i = 1; i <= p; i++) {
        if (visitados[i]) continue;
        int j = i;
        int v = 0;
        do {
            if (j <= n) {
                j = 2 * j;
            } else {
                j = 2 * j - p - 1;
            }
            visitados[j] = true;
            v++;
        } while (j != i);
        mmc = lcm(mmc, v);
    }
    cout << mmc << "\n";

    return 0;
}
