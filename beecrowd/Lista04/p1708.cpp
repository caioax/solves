// problem: 1708 - Volta

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    int i = 0, n = 0;
    while (true) {
        int pl = i / x;
        int pu = i / y;
        n++;
        if (pl > pu) {
            break;
        }
        i += y;
    }

    cout << n << "\n";

    return 0;
}
