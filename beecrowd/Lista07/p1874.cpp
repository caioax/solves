// problem: 1874 - Empurrando Blocos

#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, p, f;

    while (cin >> h >> p >> f && (h || p || f)) {
        int m[h][p];
        queue<int> blocos;
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < p; j++) {
                cin >> m[i][j];
            }
        }

        while (f--) {
            int x;
            cin >> x;
            blocos.push(x);
        }

        for (int j = p - 1; j >= 0; j--) {
            for (int i = h - 1; i >= 0; i--) {
                if (m[i][j] || blocos.empty()) continue;
                int k = blocos.front();
                m[i][j] = k;
                blocos.pop();
            }
        }

        for (int i = 0; i < h; i++) {
            for (int j = 0; j < p; j++) {
                if (j) cout << " ";
                cout << m[i][j];
            }
            cout << "\n";
        }
    }

    return 0;
}
