// problem: 1557 - Matriz Quadrada III

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    while (cin >> n && n) {
        int q = 1;
        q <<= 2 * (n - 1);
        int t = to_string(q).size(), k = 1;

        for (int i = 0; i < n; i++) {
            int h = k;
            for (int j = 0; j < n; j++) {
                int x = h;
                h <<= 1;

                if (j) cout << " ";
                string s = to_string(x);
                s = string(t - (int)s.size(), ' ') + s;

                cout << s;
            }
            cout << "\n";
            k <<= 1;
        }
        cout << "\n";
    }

    return 0;
}
