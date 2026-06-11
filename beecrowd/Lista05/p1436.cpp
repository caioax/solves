// problem: 1436 - Jogo do Tijolo

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int j = 1; j <= t; j++) {
        int n, mn, r;
        cin >> n;
        mn = n / 2;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (i == mn) r = x;
        }
        cout << "Case " << j << ": " << r << "\n";
    }

    return 0;
}
