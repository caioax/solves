// problem: 1647 - Um Jogo com Bolas de Gude

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n && n) {
        vector<int> v(n);
        long long acumulo = 0;
        while (n--) {
            int x;
            cin >> x;
            v[n] = x;
        }
        for (int x : v) {
            acumulo += acumulo + x;
        }
        cout << acumulo << "\n";
    }

    return 0;
}
