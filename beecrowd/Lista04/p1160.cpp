// problem: 1160 - Crescimento Populacional

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int pa, pb, a = 0;
        double g1, g2;
        cin >> pa >> pb >> g1 >> g2;
        g1 /= 100;
        g2 /= 100;

        while (pa <= pb) {
            a++;
            if (a > 100) break;
            pa *= (g1 + 1);
            pb *= (g2 + 1);
        }

        if (a > 100)
            cout << "Mais de 1 seculo." << "\n";
        else
            cout << a << " anos." << "\n";
    }

    return 0;
}
