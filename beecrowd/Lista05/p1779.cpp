// problem: 1779 - Estimando a Média

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int c = 1; c <= t; c++) {
        int n, m = 0, ms = 0;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            int p;
            cin >> p;
            v[i] = p;
            if (p > m) m = p;
        }

        int s = 0;
        for (int i : v) {
            if (i == m) {
                s++;
                if (s > ms) ms = s;
            } else {
                s = 0;
            }
        }
        cout << "Caso #" << c << ": " << ms << "\n";
    }

    return 0;
}
