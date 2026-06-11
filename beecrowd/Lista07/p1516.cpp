// problem: 1516 - Imagem

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;

    while (cin >> n >> m && (n || m)) {
        vector<string> d(n);
        int a, b;
        for (int i = 0; i < n; i++) {
            cin >> d[i];
        }
        cin >> a >> b;

        int escalaX = b / m, escalaY = a / n;

        for (string s : d) {
            string ns;
            for (char c : s) {
                ns += string(escalaX, c);
            }
            for (int j = 0; j < escalaY; j++) {
                cout << ns << "\n";
            }
        }
        cout << "\n";
    }

    return 0;
}
