// problem: 1099 - Soma de Ímpares Consecutivos II

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int x, y, s = 0;
        cin >> x >> y;

        if (y > x) swap(x, y);

        for (int i = y + 1; i < x; i++) {
            if (i % 2 != 0) {
                s += i;
            }
        }

        cout << s << endl;
    }

    return 0;
}
