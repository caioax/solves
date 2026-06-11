// problem: 1101 - Sequência de Números e Soma

#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;

    while (cin >> m >> n) {
        if (m <= 0 || n <= 0) return 0;
        if (n > m) swap(m, n);
        int s = 0;

        for (int i = n; i <= m; i++) {
            cout << i << " ";
            s += i;
        }

        cout << "Sum=" << s << endl;
    }

    return 0;
}
