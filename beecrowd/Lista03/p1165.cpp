// problem: 1165 - Número Primo

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int x;
        bool z = false;
        cin >> x;

        for (int i = 2; i < x; i++) {
            if (x % i == 0) {
                cout << x << " nao eh primo" << endl;
                z = true;
                break;
            }
        }

        if (z) continue;

        cout << x << " eh primo" << endl;
    }

    return 0;
}
