// problem: 1132 - Múltiplos de 13

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, s = 0;
    cin >> x >> y;

    if (y < x) swap(x, y);

    for (int i = x; i <= y; i++) {
        if (i % 13 != 0) {
            s += i;
        }
    }

    cout << s << endl;

    return 0;
}
