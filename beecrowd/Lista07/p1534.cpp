// problem: 1534 - Matriz 123

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    while (cin >> n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int x = 3;

                if (i + j == n - 1)
                    x = 2;
                else if (i == j)
                    x = 1;

                cout << x;
            }
            cout << "\n";
        }
    }

    return 0;
}
