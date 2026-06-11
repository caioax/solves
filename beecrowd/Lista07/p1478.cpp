// problem: 1478 - Matriz Quadrada II

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    while (cin >> n && n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int x = abs(i - j) + 1;

                if (j) cout << " ";
                string s = to_string(x);
                s = string(3 - (int)s.size(), ' ') + s;

                cout << s;
            }
            cout << "\n";
        }
        cout << "\n";
    }

    return 0;
}
