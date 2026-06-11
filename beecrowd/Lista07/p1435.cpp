// problem: 1435 - Matriz Quadrada I

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    while (cin >> n && n) {
        for (int i = 0; i < n; i++) {
            int k = 1;
            for (int j = 0; j < n; j++) {
                int x = (min(i, j) + 1);
                if (j > (n - 1 - i)) {
                    x -= k;
                    k++;
                }

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
