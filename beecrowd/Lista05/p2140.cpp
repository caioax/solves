// problem: 2140 - Duas Notas

#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_set<int> notas = {2, 5, 10, 20, 50, 100};
    int n, m;

    while (cin >> n >> m && (n || m)) {
        int troco = m - n;
        bool free = false;
        for (int c : notas) {
            if (troco <= c) continue;
            troco -= c;
            free = true;
            break;
        }
        if (free && notas.count(troco)) {
            cout << "possible\n";
        } else {
            cout << "impossible\n";
        }
    }

    return 0;
}
